這是一個參考 https://youtu.be/XqibXP4lwgA?si=9LCmq_kXoVsofxPi 所撰寫的Package，裡面真正作為物件辨識的只有2個package，分別為：yolov8和yolov8_def。而yolo_description中僅複製出原始碼中有關乎到yolo的urdf，也就是相機camera的相關訊息。

請注意執行要修改：
1.模型的路徑：
    在yolov8/scripts/yolov8_model.py中，有一行為```self.model = YOLO('best.pt')```這個best.pt為已訓練的weight檔，因此YOLO()括號內要放入有這個weight檔的路徑，它可能會長這樣：```self.model = YOLO('~/<your_workspace>/src/yolov8/scripts/best.pt')  ```

2.這個package NEED to HAVE 以下元素：
    a.你需要把urdf弄完整,I used a package"v4l2" to create the node in order to publish a topic named "/image_raw"  
    b.先確認你的電腦是否有以下library：  
        A.```sudo apt install python3-pip```   
        B.```pip3 install ultralytics```  
        C.```sudo apt install ros-humble-v4l2-camera```  
        D.```sudo apt install v4l-utils```  
        E.```sudo chmod 666 /dev/video0```  
        F.You can add a yaml to make camera calibiration:  
          ```mkdir -p ~/.ros/camera_info```  
          ```nano ~/.ros/camera_info/microsoft_lifecam_nx-3000:_micr.yaml```  
          ```#default settings, you can change according to your application  
              image_width: 640  
              image_height: 480  
              camera_name: microsoft_lifecam_nx-3000:_micr  
              camera_matrix:  
                rows: 3  
                cols: 3  
                data: [500, 0, 320, 0, 500, 240, 0, 0, 1]  
              distortion_model: plumb_bob  
              distortion_coefficients:  
                rows: 1  
                cols: 5  
                data: [0, 0, 0, 0, 0]  
              rectification_matrix:  
                rows: 3  
                cols: 3  
                data: [1, 0, 0, 0, 1, 0, 0, 0, 1]  
              projection_matrix:  
                rows: 3  
                cols: 4  
                data: [500, 0, 320, 0, 0, 500, 240, 0, 0, 0, 1, 0]  
          ```
        G.You MUST FIRST RUN camera NODE:  
          ```sudo ros2 run v4l2_camera v4l2_camera_node --ros-args -p video_device:="/dev/video0"```

3. This need to change its launch file to INTEGRATE to others.


TO DO:
 -【OK】 這個原始碼還有一個subscribe到跑yolo的node的另一個程式碼，我目前還沒有去撰寫。主要撰寫目的為進一步擴展功能，比如檢測結果的後處理、導航控制等，尤其在需要動態反應或複雜計算（如與目標物的距離計算）。很有可能會是BT_navigation會呼叫的package或Node。
   ┕決定分開判斷與前進的節點，而Ok的原因是增加了targetfollower.py
   ![alt text](image.png)
 - 【OK】請先測試yolo偵測結果，特別注重camera的FPS與yolo的detect speed有無吻合。
   ┕```v4l2-ctl --list-devices```= This is to check if whether it catched the video
   ┕```ros2 launch yolov8 launch_yolov8.py```=After colcon build/install you can use this to run
   ┕```ros2 topic list``` = Check topic
   ```rviz2``` = Check visualize
   ```rqt_image_view``` = Check relationship



Version:
0-最基礎的版本
1-新增了yolov8_def中的float64 confidence
2-設置置信度的值：在 self.detect_result.confidence 中設置置信度。
3-增加targetoffset.msg (bounding box的x, y座標與偏移量以及狀態)
4-增加yolov8_TargetFollower.py，以計算並且發佈targetoffset.msg的內容

