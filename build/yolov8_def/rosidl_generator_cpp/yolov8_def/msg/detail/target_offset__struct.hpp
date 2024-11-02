// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from yolov8_def:msg/TargetOffset.idl
// generated code does not contain a copyright notice

#ifndef YOLOV8_DEF__MSG__DETAIL__TARGET_OFFSET__STRUCT_HPP_
#define YOLOV8_DEF__MSG__DETAIL__TARGET_OFFSET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__yolov8_def__msg__TargetOffset __attribute__((deprecated))
#else
# define DEPRECATED__yolov8_def__msg__TargetOffset __declspec(deprecated)
#endif

namespace yolov8_def
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TargetOffset_
{
  using Type = TargetOffset_<ContainerAllocator>;

  explicit TargetOffset_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->box_center_x = 0.0;
      this->box_center_y = 0.0;
      this->x_offset = 0.0;
      this->y_offset = 0.0;
      this->status = "";
    }
  }

  explicit TargetOffset_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->box_center_x = 0.0;
      this->box_center_y = 0.0;
      this->x_offset = 0.0;
      this->y_offset = 0.0;
      this->status = "";
    }
  }

  // field types and members
  using _box_center_x_type =
    double;
  _box_center_x_type box_center_x;
  using _box_center_y_type =
    double;
  _box_center_y_type box_center_y;
  using _x_offset_type =
    double;
  _x_offset_type x_offset;
  using _y_offset_type =
    double;
  _y_offset_type y_offset;
  using _status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_type status;

  // setters for named parameter idiom
  Type & set__box_center_x(
    const double & _arg)
  {
    this->box_center_x = _arg;
    return *this;
  }
  Type & set__box_center_y(
    const double & _arg)
  {
    this->box_center_y = _arg;
    return *this;
  }
  Type & set__x_offset(
    const double & _arg)
  {
    this->x_offset = _arg;
    return *this;
  }
  Type & set__y_offset(
    const double & _arg)
  {
    this->y_offset = _arg;
    return *this;
  }
  Type & set__status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    yolov8_def::msg::TargetOffset_<ContainerAllocator> *;
  using ConstRawPtr =
    const yolov8_def::msg::TargetOffset_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<yolov8_def::msg::TargetOffset_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<yolov8_def::msg::TargetOffset_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      yolov8_def::msg::TargetOffset_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<yolov8_def::msg::TargetOffset_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      yolov8_def::msg::TargetOffset_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<yolov8_def::msg::TargetOffset_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<yolov8_def::msg::TargetOffset_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<yolov8_def::msg::TargetOffset_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__yolov8_def__msg__TargetOffset
    std::shared_ptr<yolov8_def::msg::TargetOffset_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__yolov8_def__msg__TargetOffset
    std::shared_ptr<yolov8_def::msg::TargetOffset_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TargetOffset_ & other) const
  {
    if (this->box_center_x != other.box_center_x) {
      return false;
    }
    if (this->box_center_y != other.box_center_y) {
      return false;
    }
    if (this->x_offset != other.x_offset) {
      return false;
    }
    if (this->y_offset != other.y_offset) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const TargetOffset_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TargetOffset_

// alias to use template instance with default allocator
using TargetOffset =
  yolov8_def::msg::TargetOffset_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace yolov8_def

#endif  // YOLOV8_DEF__MSG__DETAIL__TARGET_OFFSET__STRUCT_HPP_
