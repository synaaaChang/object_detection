// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yolov8_def:msg/TargetOffset.idl
// generated code does not contain a copyright notice

#ifndef YOLOV8_DEF__MSG__DETAIL__TARGET_OFFSET__STRUCT_H_
#define YOLOV8_DEF__MSG__DETAIL__TARGET_OFFSET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/TargetOffset in the package yolov8_def.
typedef struct yolov8_def__msg__TargetOffset
{
  double box_center_x;
  double box_center_y;
  double x_offset;
  double y_offset;
  rosidl_runtime_c__String status;
} yolov8_def__msg__TargetOffset;

// Struct for a sequence of yolov8_def__msg__TargetOffset.
typedef struct yolov8_def__msg__TargetOffset__Sequence
{
  yolov8_def__msg__TargetOffset * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yolov8_def__msg__TargetOffset__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YOLOV8_DEF__MSG__DETAIL__TARGET_OFFSET__STRUCT_H_
