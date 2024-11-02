// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yolov8_def:msg/Boundingboxresult.idl
// generated code does not contain a copyright notice

#ifndef YOLOV8_DEF__MSG__DETAIL__BOUNDINGBOXRESULT__STRUCT_H_
#define YOLOV8_DEF__MSG__DETAIL__BOUNDINGBOXRESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'class_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Boundingboxresult in the package yolov8_def.
typedef struct yolov8_def__msg__Boundingboxresult
{
  rosidl_runtime_c__String class_name;
  int64_t top;
  int64_t left;
  int64_t bottom;
  int64_t right;
  double confidence;
} yolov8_def__msg__Boundingboxresult;

// Struct for a sequence of yolov8_def__msg__Boundingboxresult.
typedef struct yolov8_def__msg__Boundingboxresult__Sequence
{
  yolov8_def__msg__Boundingboxresult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yolov8_def__msg__Boundingboxresult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YOLOV8_DEF__MSG__DETAIL__BOUNDINGBOXRESULT__STRUCT_H_
