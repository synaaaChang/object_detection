// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yolov8_def:msg/Boundingboxresult.idl
// generated code does not contain a copyright notice

#ifndef YOLOV8_DEF__MSG__DETAIL__BOUNDINGBOXRESULT__BUILDER_HPP_
#define YOLOV8_DEF__MSG__DETAIL__BOUNDINGBOXRESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yolov8_def/msg/detail/boundingboxresult__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yolov8_def
{

namespace msg
{

namespace builder
{

class Init_Boundingboxresult_confidence
{
public:
  explicit Init_Boundingboxresult_confidence(::yolov8_def::msg::Boundingboxresult & msg)
  : msg_(msg)
  {}
  ::yolov8_def::msg::Boundingboxresult confidence(::yolov8_def::msg::Boundingboxresult::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yolov8_def::msg::Boundingboxresult msg_;
};

class Init_Boundingboxresult_right
{
public:
  explicit Init_Boundingboxresult_right(::yolov8_def::msg::Boundingboxresult & msg)
  : msg_(msg)
  {}
  Init_Boundingboxresult_confidence right(::yolov8_def::msg::Boundingboxresult::_right_type arg)
  {
    msg_.right = std::move(arg);
    return Init_Boundingboxresult_confidence(msg_);
  }

private:
  ::yolov8_def::msg::Boundingboxresult msg_;
};

class Init_Boundingboxresult_bottom
{
public:
  explicit Init_Boundingboxresult_bottom(::yolov8_def::msg::Boundingboxresult & msg)
  : msg_(msg)
  {}
  Init_Boundingboxresult_right bottom(::yolov8_def::msg::Boundingboxresult::_bottom_type arg)
  {
    msg_.bottom = std::move(arg);
    return Init_Boundingboxresult_right(msg_);
  }

private:
  ::yolov8_def::msg::Boundingboxresult msg_;
};

class Init_Boundingboxresult_left
{
public:
  explicit Init_Boundingboxresult_left(::yolov8_def::msg::Boundingboxresult & msg)
  : msg_(msg)
  {}
  Init_Boundingboxresult_bottom left(::yolov8_def::msg::Boundingboxresult::_left_type arg)
  {
    msg_.left = std::move(arg);
    return Init_Boundingboxresult_bottom(msg_);
  }

private:
  ::yolov8_def::msg::Boundingboxresult msg_;
};

class Init_Boundingboxresult_top
{
public:
  explicit Init_Boundingboxresult_top(::yolov8_def::msg::Boundingboxresult & msg)
  : msg_(msg)
  {}
  Init_Boundingboxresult_left top(::yolov8_def::msg::Boundingboxresult::_top_type arg)
  {
    msg_.top = std::move(arg);
    return Init_Boundingboxresult_left(msg_);
  }

private:
  ::yolov8_def::msg::Boundingboxresult msg_;
};

class Init_Boundingboxresult_class_name
{
public:
  Init_Boundingboxresult_class_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Boundingboxresult_top class_name(::yolov8_def::msg::Boundingboxresult::_class_name_type arg)
  {
    msg_.class_name = std::move(arg);
    return Init_Boundingboxresult_top(msg_);
  }

private:
  ::yolov8_def::msg::Boundingboxresult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yolov8_def::msg::Boundingboxresult>()
{
  return yolov8_def::msg::builder::Init_Boundingboxresult_class_name();
}

}  // namespace yolov8_def

#endif  // YOLOV8_DEF__MSG__DETAIL__BOUNDINGBOXRESULT__BUILDER_HPP_
