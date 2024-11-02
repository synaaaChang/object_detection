// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from yolov8_def:msg/TargetOffset.idl
// generated code does not contain a copyright notice

#ifndef YOLOV8_DEF__MSG__DETAIL__TARGET_OFFSET__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define YOLOV8_DEF__MSG__DETAIL__TARGET_OFFSET__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "yolov8_def/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "yolov8_def/msg/detail/target_offset__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace yolov8_def
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_yolov8_def
cdr_serialize(
  const yolov8_def::msg::TargetOffset & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_yolov8_def
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  yolov8_def::msg::TargetOffset & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_yolov8_def
get_serialized_size(
  const yolov8_def::msg::TargetOffset & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_yolov8_def
max_serialized_size_TargetOffset(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace yolov8_def

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_yolov8_def
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, yolov8_def, msg, TargetOffset)();

#ifdef __cplusplus
}
#endif

#endif  // YOLOV8_DEF__MSG__DETAIL__TARGET_OFFSET__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
