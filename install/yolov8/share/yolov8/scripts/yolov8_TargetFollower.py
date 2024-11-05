#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from yolov8_def.msg import YoloRawInfo, Boundingboxresult, TargetOffset  # 引入自定義消息

class TargetFollower(Node):
    def __init__(self):
        super().__init__('target_follower')
        
        # 訂閱來自 Yolov8 的檢測結果
        self.subscription = self.create_subscription(
            YoloRawInfo,
            'Yolov8_box_info',
            self.detection_callback,
            10)

        # 創建publisher來發布目標偏移量
        self.target_pub = self.create_publisher(TargetOffset, 'target_offset', 10)
        
        # 設定目標類別名稱
        self.target_class = "here"
        self.confidence_threshold = 0.6  # 置信度閾值
        self.image_center = (320, 240)  # 假設影像為640x480像素

        self.stable_count = 0  # 合格幀數計數器
        self.stable_threshold = 3  # 設定以3幀符合才可
        self.target_found_last_status = False  # 上次目標是否已找到

        self.status = "lost"
        self.box_info = {"box_center_x": 0.0, "box_center_y": 0.0, "x_offset": 0.0, "y_offset": 0.0}

        # 定時器，每秒更新一次狀態信息
        self.timer = self.create_timer(1, self.log_status)

    def detection_callback(self, msg):
        target_found = False  # 初始化當前幀的目標檢測狀態
        box_center_x, box_center_y, x_offset, y_offset = 0.0, 0.0, 0.0, 0.0

        # 遍歷所有檢測結果
        for detection in msg.yolov8_inference:
            if detection.class_name == self.target_class and detection.confidence > self.confidence_threshold:
                target_found = True

                # 計算 bounding box 中心
                box_center_x = (detection.left + detection.right) / 2
                box_center_y = (detection.top + detection.bottom) / 2
                
                # 計算偏移量
                x_offset = box_center_x - self.image_center[0]
                y_offset = box_center_y - self.image_center[1]
                
                break

        if target_found:
            self.stable_count += 1
        else:
            self.stable_count = 0

        #依目標狀態，再建構targetoffset.msg
        offset_msg = TargetOffset()
        offset_msg.box_center_x = box_center_x if target_found else 0.0
        offset_msg.box_center_y = box_center_y if target_found else 0.0
        offset_msg.x_offset = x_offset if target_found else 0.0
        offset_msg.y_offset = y_offset if target_found else 0.0

        if self.stable_count >= self.stable_threshold:
            offset_msg.status = "found"
            self.status = "found"
            self.box_info = {
                "box_center_x": box_center_x,
                "box_center_y": box_center_y,
                "x_offset": x_offset,
                "y_offset": y_offset,
            }
            self.stable_count = self.stable_threshold
        else:
            offset_msg.status = "lost"
            self.status = "lost"
            self.box_info = {"box_center_x": 0.0, "box_center_y": 0.0, "x_offset": 0.0, "y_offset": 0.0}

        # 發佈所有targetoffset.msg的內容
        self.target_pub.publish(offset_msg)  

    def log_status(self):
        # 定期輸出資訊，保持"STATUS"和"BOX_INFO"標題不變
        self.get_logger().info(f"STATUS: {self.status} | BOX_INFO: {self.box_info}")

def main(args=None):
    rclpy.init(args=args)
    target_follower = TargetFollower()
    rclpy.spin(target_follower)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
