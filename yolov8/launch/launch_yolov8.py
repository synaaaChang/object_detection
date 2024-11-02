import os

from launch import LaunchDescription
from ament_index_python.packages import get_package_share_directory
from launch.actions import DeclareLaunchArgument
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node

def generate_launch_description():
    yolov8_script_file_dir = os.path.join(get_package_share_directory('yolov8'), 'scripts')

    return LaunchDescription([
        # IncludeLaunchDescription(
        #     PythonLaunchDescriptionSource([yolov8_script_file_dir, '/yolov8_model.py'])
        # ),
        # IncludeLaunchDescription(
        #     PythonLaunchDescriptionSource([yolov8_script_file_dir, '/yolov8_TargetFollower.py'])
        # ),
        Node(
            package='yolov8',
            executable='yolov8_model.py'
        ),
        Node(
            package='yolov8',
            executable='yolov8_TargetFollower.py',
            output='screen'
        ),
    ])
