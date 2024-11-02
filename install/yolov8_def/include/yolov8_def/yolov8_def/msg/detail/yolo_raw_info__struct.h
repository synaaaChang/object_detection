// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yolov8_def:msg/YoloRawInfo.idl
// generated code does not contain a copyright notice

#ifndef YOLOV8_DEF__MSG__DETAIL__YOLO_RAW_INFO__STRUCT_H_
#define YOLOV8_DEF__MSG__DETAIL__YOLO_RAW_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'yolov8_inference'
#include "yolov8_def/msg/detail/boundingboxresult__struct.h"

/// Struct defined in msg/YoloRawInfo in the package yolov8_def.
typedef struct yolov8_def__msg__YoloRawInfo
{
  std_msgs__msg__Header header;
  yolov8_def__msg__Boundingboxresult__Sequence yolov8_inference;
} yolov8_def__msg__YoloRawInfo;

// Struct for a sequence of yolov8_def__msg__YoloRawInfo.
typedef struct yolov8_def__msg__YoloRawInfo__Sequence
{
  yolov8_def__msg__YoloRawInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yolov8_def__msg__YoloRawInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YOLOV8_DEF__MSG__DETAIL__YOLO_RAW_INFO__STRUCT_H_
