#!/usr/bin/env python3
from ultralytics import YOLO
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge

from yolov8_def.msg import Boundingboxresult
from yolov8_def.msg import YoloRawInfo

import os

bridge = CvBridge()

class Yolov8(Node):
    def __init__(self):
        super().__init__('yolo_node')
        current_dir = os.path.dirname(os.path.abspath(__file__))
        self.model = YOLO('/home/synaaa/object_detection_test/yolov8/scripts/best.pt') #記得改路徑！Remember to change the path
        
        self.inference = YoloRawInfo()
        self.inference.header.frame_id = "inference"

        #創建一個subsriber,用來訂閱來自相機的消息
        self.sub = self.create_subscription(
            Image, 
            '/image_raw', 
            self.do_callback, 
            10)
        self.sub

        #創建一個publisher,用來發布yolov8的結果(InferenceResult)
        self.detect_pub = self.create_publisher(YoloRawInfo, "Yolov8_box_info", 1)
        #創建一個publisher,用來發布
        self.img_pub = self.create_publisher(Image, "detect_pic", 1)

    def do_callback(self, data):

        img_cv = bridge.imgmsg_to_cv2(data, "bgr8")
        results = self.model(img_cv)

        self.inference.header.frame_id = "inference"
        self.inference.header.stamp = self.get_clock().now().to_msg() 

        for i in results:
            boxes = i.boxes
            for box in boxes:
                self.detect_result = Boundingboxresult()
                b = box.xyxy[0].to('cpu').detach().numpy().copy()
                c = box.cls
                self.detect_result.class_name = self.model.names[int(c)]
                self.detect_result.top = int(b[0])
                self.detect_result.left = int(b[1])
                self.detect_result.bottom = int(b[2])
                self.detect_result.right = int(b[3])
                self.detect_result.confidence = float(box.conf[0])
                self.inference.yolov8_inference.append(self.detect_result)

        annotated_frame = results[0].plot()
        img_w_box = bridge.cv2_to_imgmsg(annotated_frame)

        self.img_pub.publish(img_w_box)
        self.detect_pub.publish(self.inference)
        self.inference.yolov8_inference.clear()

if __name__ == '__main__':
    rclpy.init(args=None)
    yolo_node = Yolov8()
    rclpy.spin(yolo_node)
    rclpy.shutdown()
