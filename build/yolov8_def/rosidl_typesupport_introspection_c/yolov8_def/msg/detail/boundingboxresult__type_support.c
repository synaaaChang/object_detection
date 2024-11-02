// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from yolov8_def:msg/Boundingboxresult.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "yolov8_def/msg/detail/boundingboxresult__rosidl_typesupport_introspection_c.h"
#include "yolov8_def/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "yolov8_def/msg/detail/boundingboxresult__functions.h"
#include "yolov8_def/msg/detail/boundingboxresult__struct.h"


// Include directives for member types
// Member `class_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void yolov8_def__msg__Boundingboxresult__rosidl_typesupport_introspection_c__Boundingboxresult_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  yolov8_def__msg__Boundingboxresult__init(message_memory);
}

void yolov8_def__msg__Boundingboxresult__rosidl_typesupport_introspection_c__Boundingboxresult_fini_function(void * message_memory)
{
  yolov8_def__msg__Boundingboxresult__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember yolov8_def__msg__Boundingboxresult__rosidl_typesupport_introspection_c__Boundingboxresult_message_member_array[6] = {
  {
    "class_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yolov8_def__msg__Boundingboxresult, class_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "top",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yolov8_def__msg__Boundingboxresult, top),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yolov8_def__msg__Boundingboxresult, left),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bottom",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yolov8_def__msg__Boundingboxresult, bottom),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yolov8_def__msg__Boundingboxresult, right),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yolov8_def__msg__Boundingboxresult, confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers yolov8_def__msg__Boundingboxresult__rosidl_typesupport_introspection_c__Boundingboxresult_message_members = {
  "yolov8_def__msg",  // message namespace
  "Boundingboxresult",  // message name
  6,  // number of fields
  sizeof(yolov8_def__msg__Boundingboxresult),
  yolov8_def__msg__Boundingboxresult__rosidl_typesupport_introspection_c__Boundingboxresult_message_member_array,  // message members
  yolov8_def__msg__Boundingboxresult__rosidl_typesupport_introspection_c__Boundingboxresult_init_function,  // function to initialize message memory (memory has to be allocated)
  yolov8_def__msg__Boundingboxresult__rosidl_typesupport_introspection_c__Boundingboxresult_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t yolov8_def__msg__Boundingboxresult__rosidl_typesupport_introspection_c__Boundingboxresult_message_type_support_handle = {
  0,
  &yolov8_def__msg__Boundingboxresult__rosidl_typesupport_introspection_c__Boundingboxresult_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_yolov8_def
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yolov8_def, msg, Boundingboxresult)() {
  if (!yolov8_def__msg__Boundingboxresult__rosidl_typesupport_introspection_c__Boundingboxresult_message_type_support_handle.typesupport_identifier) {
    yolov8_def__msg__Boundingboxresult__rosidl_typesupport_introspection_c__Boundingboxresult_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &yolov8_def__msg__Boundingboxresult__rosidl_typesupport_introspection_c__Boundingboxresult_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
