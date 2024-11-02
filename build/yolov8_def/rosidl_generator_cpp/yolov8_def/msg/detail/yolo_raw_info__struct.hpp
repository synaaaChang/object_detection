// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from yolov8_def:msg/YoloRawInfo.idl
// generated code does not contain a copyright notice

#ifndef YOLOV8_DEF__MSG__DETAIL__YOLO_RAW_INFO__STRUCT_HPP_
#define YOLOV8_DEF__MSG__DETAIL__YOLO_RAW_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'yolov8_inference'
#include "yolov8_def/msg/detail/boundingboxresult__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__yolov8_def__msg__YoloRawInfo __attribute__((deprecated))
#else
# define DEPRECATED__yolov8_def__msg__YoloRawInfo __declspec(deprecated)
#endif

namespace yolov8_def
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct YoloRawInfo_
{
  using Type = YoloRawInfo_<ContainerAllocator>;

  explicit YoloRawInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit YoloRawInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _yolov8_inference_type =
    std::vector<yolov8_def::msg::Boundingboxresult_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<yolov8_def::msg::Boundingboxresult_<ContainerAllocator>>>;
  _yolov8_inference_type yolov8_inference;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__yolov8_inference(
    const std::vector<yolov8_def::msg::Boundingboxresult_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<yolov8_def::msg::Boundingboxresult_<ContainerAllocator>>> & _arg)
  {
    this->yolov8_inference = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    yolov8_def::msg::YoloRawInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const yolov8_def::msg::YoloRawInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<yolov8_def::msg::YoloRawInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<yolov8_def::msg::YoloRawInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      yolov8_def::msg::YoloRawInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<yolov8_def::msg::YoloRawInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      yolov8_def::msg::YoloRawInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<yolov8_def::msg::YoloRawInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<yolov8_def::msg::YoloRawInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<yolov8_def::msg::YoloRawInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__yolov8_def__msg__YoloRawInfo
    std::shared_ptr<yolov8_def::msg::YoloRawInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__yolov8_def__msg__YoloRawInfo
    std::shared_ptr<yolov8_def::msg::YoloRawInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const YoloRawInfo_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->yolov8_inference != other.yolov8_inference) {
      return false;
    }
    return true;
  }
  bool operator!=(const YoloRawInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct YoloRawInfo_

// alias to use template instance with default allocator
using YoloRawInfo =
  yolov8_def::msg::YoloRawInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace yolov8_def

#endif  // YOLOV8_DEF__MSG__DETAIL__YOLO_RAW_INFO__STRUCT_HPP_
