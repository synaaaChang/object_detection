// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yolov8_def:msg/YoloRawInfo.idl
// generated code does not contain a copyright notice

#ifndef YOLOV8_DEF__MSG__DETAIL__YOLO_RAW_INFO__BUILDER_HPP_
#define YOLOV8_DEF__MSG__DETAIL__YOLO_RAW_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yolov8_def/msg/detail/yolo_raw_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yolov8_def
{

namespace msg
{

namespace builder
{

class Init_YoloRawInfo_yolov8_inference
{
public:
  explicit Init_YoloRawInfo_yolov8_inference(::yolov8_def::msg::YoloRawInfo & msg)
  : msg_(msg)
  {}
  ::yolov8_def::msg::YoloRawInfo yolov8_inference(::yolov8_def::msg::YoloRawInfo::_yolov8_inference_type arg)
  {
    msg_.yolov8_inference = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yolov8_def::msg::YoloRawInfo msg_;
};

class Init_YoloRawInfo_header
{
public:
  Init_YoloRawInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_YoloRawInfo_yolov8_inference header(::yolov8_def::msg::YoloRawInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_YoloRawInfo_yolov8_inference(msg_);
  }

private:
  ::yolov8_def::msg::YoloRawInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yolov8_def::msg::YoloRawInfo>()
{
  return yolov8_def::msg::builder::Init_YoloRawInfo_header();
}

}  // namespace yolov8_def

#endif  // YOLOV8_DEF__MSG__DETAIL__YOLO_RAW_INFO__BUILDER_HPP_
