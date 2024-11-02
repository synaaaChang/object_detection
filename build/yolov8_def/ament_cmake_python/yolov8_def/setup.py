from setuptools import find_packages
from setuptools import setup

setup(
    name='yolov8_def',
    version='0.0.0',
    packages=find_packages(
        include=('yolov8_def', 'yolov8_def.*')),
)
