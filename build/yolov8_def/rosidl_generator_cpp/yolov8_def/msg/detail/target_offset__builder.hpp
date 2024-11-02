// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yolov8_def:msg/TargetOffset.idl
// generated code does not contain a copyright notice

#ifndef YOLOV8_DEF__MSG__DETAIL__TARGET_OFFSET__BUILDER_HPP_
#define YOLOV8_DEF__MSG__DETAIL__TARGET_OFFSET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yolov8_def/msg/detail/target_offset__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yolov8_def
{

namespace msg
{

namespace builder
{

class Init_TargetOffset_status
{
public:
  explicit Init_TargetOffset_status(::yolov8_def::msg::TargetOffset & msg)
  : msg_(msg)
  {}
  ::yolov8_def::msg::TargetOffset status(::yolov8_def::msg::TargetOffset::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yolov8_def::msg::TargetOffset msg_;
};

class Init_TargetOffset_y_offset
{
public:
  explicit Init_TargetOffset_y_offset(::yolov8_def::msg::TargetOffset & msg)
  : msg_(msg)
  {}
  Init_TargetOffset_status y_offset(::yolov8_def::msg::TargetOffset::_y_offset_type arg)
  {
    msg_.y_offset = std::move(arg);
    return Init_TargetOffset_status(msg_);
  }

private:
  ::yolov8_def::msg::TargetOffset msg_;
};

class Init_TargetOffset_x_offset
{
public:
  explicit Init_TargetOffset_x_offset(::yolov8_def::msg::TargetOffset & msg)
  : msg_(msg)
  {}
  Init_TargetOffset_y_offset x_offset(::yolov8_def::msg::TargetOffset::_x_offset_type arg)
  {
    msg_.x_offset = std::move(arg);
    return Init_TargetOffset_y_offset(msg_);
  }

private:
  ::yolov8_def::msg::TargetOffset msg_;
};

class Init_TargetOffset_box_center_y
{
public:
  explicit Init_TargetOffset_box_center_y(::yolov8_def::msg::TargetOffset & msg)
  : msg_(msg)
  {}
  Init_TargetOffset_x_offset box_center_y(::yolov8_def::msg::TargetOffset::_box_center_y_type arg)
  {
    msg_.box_center_y = std::move(arg);
    return Init_TargetOffset_x_offset(msg_);
  }

private:
  ::yolov8_def::msg::TargetOffset msg_;
};

class Init_TargetOffset_box_center_x
{
public:
  Init_TargetOffset_box_center_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TargetOffset_box_center_y box_center_x(::yolov8_def::msg::TargetOffset::_box_center_x_type arg)
  {
    msg_.box_center_x = std::move(arg);
    return Init_TargetOffset_box_center_y(msg_);
  }

private:
  ::yolov8_def::msg::TargetOffset msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yolov8_def::msg::TargetOffset>()
{
  return yolov8_def::msg::builder::Init_TargetOffset_box_center_x();
}

}  // namespace yolov8_def

#endif  // YOLOV8_DEF__MSG__DETAIL__TARGET_OFFSET__BUILDER_HPP_
