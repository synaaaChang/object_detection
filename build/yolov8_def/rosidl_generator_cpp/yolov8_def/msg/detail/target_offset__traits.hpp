// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from yolov8_def:msg/TargetOffset.idl
// generated code does not contain a copyright notice

#ifndef YOLOV8_DEF__MSG__DETAIL__TARGET_OFFSET__TRAITS_HPP_
#define YOLOV8_DEF__MSG__DETAIL__TARGET_OFFSET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "yolov8_def/msg/detail/target_offset__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace yolov8_def
{

namespace msg
{

inline void to_flow_style_yaml(
  const TargetOffset & msg,
  std::ostream & out)
{
  out << "{";
  // member: box_center_x
  {
    out << "box_center_x: ";
    rosidl_generator_traits::value_to_yaml(msg.box_center_x, out);
    out << ", ";
  }

  // member: box_center_y
  {
    out << "box_center_y: ";
    rosidl_generator_traits::value_to_yaml(msg.box_center_y, out);
    out << ", ";
  }

  // member: x_offset
  {
    out << "x_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.x_offset, out);
    out << ", ";
  }

  // member: y_offset
  {
    out << "y_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.y_offset, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TargetOffset & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: box_center_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "box_center_x: ";
    rosidl_generator_traits::value_to_yaml(msg.box_center_x, out);
    out << "\n";
  }

  // member: box_center_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "box_center_y: ";
    rosidl_generator_traits::value_to_yaml(msg.box_center_y, out);
    out << "\n";
  }

  // member: x_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.x_offset, out);
    out << "\n";
  }

  // member: y_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.y_offset, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TargetOffset & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace yolov8_def

namespace rosidl_generator_traits
{

[[deprecated("use yolov8_def::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const yolov8_def::msg::TargetOffset & msg,
  std::ostream & out, size_t indentation = 0)
{
  yolov8_def::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use yolov8_def::msg::to_yaml() instead")]]
inline std::string to_yaml(const yolov8_def::msg::TargetOffset & msg)
{
  return yolov8_def::msg::to_yaml(msg);
}

template<>
inline const char * data_type<yolov8_def::msg::TargetOffset>()
{
  return "yolov8_def::msg::TargetOffset";
}

template<>
inline const char * name<yolov8_def::msg::TargetOffset>()
{
  return "yolov8_def/msg/TargetOffset";
}

template<>
struct has_fixed_size<yolov8_def::msg::TargetOffset>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<yolov8_def::msg::TargetOffset>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<yolov8_def::msg::TargetOffset>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YOLOV8_DEF__MSG__DETAIL__TARGET_OFFSET__TRAITS_HPP_
