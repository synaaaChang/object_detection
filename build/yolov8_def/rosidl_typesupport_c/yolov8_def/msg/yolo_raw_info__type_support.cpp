// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from yolov8_def:msg/YoloRawInfo.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "yolov8_def/msg/detail/yolo_raw_info__struct.h"
#include "yolov8_def/msg/detail/yolo_raw_info__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace yolov8_def
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _YoloRawInfo_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _YoloRawInfo_type_support_ids_t;

static const _YoloRawInfo_type_support_ids_t _YoloRawInfo_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _YoloRawInfo_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _YoloRawInfo_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _YoloRawInfo_type_support_symbol_names_t _YoloRawInfo_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, yolov8_def, msg, YoloRawInfo)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yolov8_def, msg, YoloRawInfo)),
  }
};

typedef struct _YoloRawInfo_type_support_data_t
{
  void * data[2];
} _YoloRawInfo_type_support_data_t;

static _YoloRawInfo_type_support_data_t _YoloRawInfo_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _YoloRawInfo_message_typesupport_map = {
  2,
  "yolov8_def",
  &_YoloRawInfo_message_typesupport_ids.typesupport_identifier[0],
  &_YoloRawInfo_message_typesupport_symbol_names.symbol_name[0],
  &_YoloRawInfo_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t YoloRawInfo_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_YoloRawInfo_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace yolov8_def

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, yolov8_def, msg, YoloRawInfo)() {
  return &::yolov8_def::msg::rosidl_typesupport_c::YoloRawInfo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
