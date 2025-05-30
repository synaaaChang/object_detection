// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from yolov8_def:msg/YoloRawInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "yolov8_def/msg/detail/yolo_raw_info__rosidl_typesupport_introspection_c.h"
#include "yolov8_def/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "yolov8_def/msg/detail/yolo_raw_info__functions.h"
#include "yolov8_def/msg/detail/yolo_raw_info__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `yolov8_inference`
#include "yolov8_def/msg/boundingboxresult.h"
// Member `yolov8_inference`
#include "yolov8_def/msg/detail/boundingboxresult__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void yolov8_def__msg__YoloRawInfo__rosidl_typesupport_introspection_c__YoloRawInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  yolov8_def__msg__YoloRawInfo__init(message_memory);
}

void yolov8_def__msg__YoloRawInfo__rosidl_typesupport_introspection_c__YoloRawInfo_fini_function(void * message_memory)
{
  yolov8_def__msg__YoloRawInfo__fini(message_memory);
}

size_t yolov8_def__msg__YoloRawInfo__rosidl_typesupport_introspection_c__size_function__YoloRawInfo__yolov8_inference(
  const void * untyped_member)
{
  const yolov8_def__msg__Boundingboxresult__Sequence * member =
    (const yolov8_def__msg__Boundingboxresult__Sequence *)(untyped_member);
  return member->size;
}

const void * yolov8_def__msg__YoloRawInfo__rosidl_typesupport_introspection_c__get_const_function__YoloRawInfo__yolov8_inference(
  const void * untyped_member, size_t index)
{
  const yolov8_def__msg__Boundingboxresult__Sequence * member =
    (const yolov8_def__msg__Boundingboxresult__Sequence *)(untyped_member);
  return &member->data[index];
}

void * yolov8_def__msg__YoloRawInfo__rosidl_typesupport_introspection_c__get_function__YoloRawInfo__yolov8_inference(
  void * untyped_member, size_t index)
{
  yolov8_def__msg__Boundingboxresult__Sequence * member =
    (yolov8_def__msg__Boundingboxresult__Sequence *)(untyped_member);
  return &member->data[index];
}

void yolov8_def__msg__YoloRawInfo__rosidl_typesupport_introspection_c__fetch_function__YoloRawInfo__yolov8_inference(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const yolov8_def__msg__Boundingboxresult * item =
    ((const yolov8_def__msg__Boundingboxresult *)
    yolov8_def__msg__YoloRawInfo__rosidl_typesupport_introspection_c__get_const_function__YoloRawInfo__yolov8_inference(untyped_member, index));
  yolov8_def__msg__Boundingboxresult * value =
    (yolov8_def__msg__Boundingboxresult *)(untyped_value);
  *value = *item;
}

void yolov8_def__msg__YoloRawInfo__rosidl_typesupport_introspection_c__assign_function__YoloRawInfo__yolov8_inference(
  void * untyped_member, size_t index, const void * untyped_value)
{
  yolov8_def__msg__Boundingboxresult * item =
    ((yolov8_def__msg__Boundingboxresult *)
    yolov8_def__msg__YoloRawInfo__rosidl_typesupport_introspection_c__get_function__YoloRawInfo__yolov8_inference(untyped_member, index));
  const yolov8_def__msg__Boundingboxresult * value =
    (const yolov8_def__msg__Boundingboxresult *)(untyped_value);
  *item = *value;
}

bool yolov8_def__msg__YoloRawInfo__rosidl_typesupport_introspection_c__resize_function__YoloRawInfo__yolov8_inference(
  void * untyped_member, size_t size)
{
  yolov8_def__msg__Boundingboxresult__Sequence * member =
    (yolov8_def__msg__Boundingboxresult__Sequence *)(untyped_member);
  yolov8_def__msg__Boundingboxresult__Sequence__fini(member);
  return yolov8_def__msg__Boundingboxresult__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember yolov8_def__msg__YoloRawInfo__rosidl_typesupport_introspection_c__YoloRawInfo_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yolov8_def__msg__YoloRawInfo, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yolov8_inference",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yolov8_def__msg__YoloRawInfo, yolov8_inference),  // bytes offset in struct
    NULL,  // default value
    yolov8_def__msg__YoloRawInfo__rosidl_typesupport_introspection_c__size_function__YoloRawInfo__yolov8_inference,  // size() function pointer
    yolov8_def__msg__YoloRawInfo__rosidl_typesupport_introspection_c__get_const_function__YoloRawInfo__yolov8_inference,  // get_const(index) function pointer
    yolov8_def__msg__YoloRawInfo__rosidl_typesupport_introspection_c__get_function__YoloRawInfo__yolov8_inference,  // get(index) function pointer
    yolov8_def__msg__YoloRawInfo__rosidl_typesupport_introspection_c__fetch_function__YoloRawInfo__yolov8_inference,  // fetch(index, &value) function pointer
    yolov8_def__msg__YoloRawInfo__rosidl_typesupport_introspection_c__assign_function__YoloRawInfo__yolov8_inference,  // assign(index, value) function pointer
    yolov8_def__msg__YoloRawInfo__rosidl_typesupport_introspection_c__resize_function__YoloRawInfo__yolov8_inference  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers yolov8_def__msg__YoloRawInfo__rosidl_typesupport_introspection_c__YoloRawInfo_message_members = {
  "yolov8_def__msg",  // message namespace
  "YoloRawInfo",  // message name
  2,  // number of fields
  sizeof(yolov8_def__msg__YoloRawInfo),
  yolov8_def__msg__YoloRawInfo__rosidl_typesupport_introspection_c__YoloRawInfo_message_member_array,  // message members
  yolov8_def__msg__YoloRawInfo__rosidl_typesupport_introspection_c__YoloRawInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  yolov8_def__msg__YoloRawInfo__rosidl_typesupport_introspection_c__YoloRawInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t yolov8_def__msg__YoloRawInfo__rosidl_typesupport_introspection_c__YoloRawInfo_message_type_support_handle = {
  0,
  &yolov8_def__msg__YoloRawInfo__rosidl_typesupport_introspection_c__YoloRawInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_yolov8_def
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yolov8_def, msg, YoloRawInfo)() {
  yolov8_def__msg__YoloRawInfo__rosidl_typesupport_introspection_c__YoloRawInfo_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  yolov8_def__msg__YoloRawInfo__rosidl_typesupport_introspection_c__YoloRawInfo_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yolov8_def, msg, Boundingboxresult)();
  if (!yolov8_def__msg__YoloRawInfo__rosidl_typesupport_introspection_c__YoloRawInfo_message_type_support_handle.typesupport_identifier) {
    yolov8_def__msg__YoloRawInfo__rosidl_typesupport_introspection_c__YoloRawInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &yolov8_def__msg__YoloRawInfo__rosidl_typesupport_introspection_c__YoloRawInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
