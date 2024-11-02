// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from yolov8_def:msg/TargetOffset.idl
// generated code does not contain a copyright notice
#include "yolov8_def/msg/detail/target_offset__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `status`
#include "rosidl_runtime_c/string_functions.h"

bool
yolov8_def__msg__TargetOffset__init(yolov8_def__msg__TargetOffset * msg)
{
  if (!msg) {
    return false;
  }
  // box_center_x
  // box_center_y
  // x_offset
  // y_offset
  // status
  if (!rosidl_runtime_c__String__init(&msg->status)) {
    yolov8_def__msg__TargetOffset__fini(msg);
    return false;
  }
  return true;
}

void
yolov8_def__msg__TargetOffset__fini(yolov8_def__msg__TargetOffset * msg)
{
  if (!msg) {
    return;
  }
  // box_center_x
  // box_center_y
  // x_offset
  // y_offset
  // status
  rosidl_runtime_c__String__fini(&msg->status);
}

bool
yolov8_def__msg__TargetOffset__are_equal(const yolov8_def__msg__TargetOffset * lhs, const yolov8_def__msg__TargetOffset * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // box_center_x
  if (lhs->box_center_x != rhs->box_center_x) {
    return false;
  }
  // box_center_y
  if (lhs->box_center_y != rhs->box_center_y) {
    return false;
  }
  // x_offset
  if (lhs->x_offset != rhs->x_offset) {
    return false;
  }
  // y_offset
  if (lhs->y_offset != rhs->y_offset) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  return true;
}

bool
yolov8_def__msg__TargetOffset__copy(
  const yolov8_def__msg__TargetOffset * input,
  yolov8_def__msg__TargetOffset * output)
{
  if (!input || !output) {
    return false;
  }
  // box_center_x
  output->box_center_x = input->box_center_x;
  // box_center_y
  output->box_center_y = input->box_center_y;
  // x_offset
  output->x_offset = input->x_offset;
  // y_offset
  output->y_offset = input->y_offset;
  // status
  if (!rosidl_runtime_c__String__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  return true;
}

yolov8_def__msg__TargetOffset *
yolov8_def__msg__TargetOffset__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yolov8_def__msg__TargetOffset * msg = (yolov8_def__msg__TargetOffset *)allocator.allocate(sizeof(yolov8_def__msg__TargetOffset), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yolov8_def__msg__TargetOffset));
  bool success = yolov8_def__msg__TargetOffset__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yolov8_def__msg__TargetOffset__destroy(yolov8_def__msg__TargetOffset * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yolov8_def__msg__TargetOffset__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yolov8_def__msg__TargetOffset__Sequence__init(yolov8_def__msg__TargetOffset__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yolov8_def__msg__TargetOffset * data = NULL;

  if (size) {
    data = (yolov8_def__msg__TargetOffset *)allocator.zero_allocate(size, sizeof(yolov8_def__msg__TargetOffset), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yolov8_def__msg__TargetOffset__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yolov8_def__msg__TargetOffset__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
yolov8_def__msg__TargetOffset__Sequence__fini(yolov8_def__msg__TargetOffset__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      yolov8_def__msg__TargetOffset__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

yolov8_def__msg__TargetOffset__Sequence *
yolov8_def__msg__TargetOffset__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yolov8_def__msg__TargetOffset__Sequence * array = (yolov8_def__msg__TargetOffset__Sequence *)allocator.allocate(sizeof(yolov8_def__msg__TargetOffset__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yolov8_def__msg__TargetOffset__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yolov8_def__msg__TargetOffset__Sequence__destroy(yolov8_def__msg__TargetOffset__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yolov8_def__msg__TargetOffset__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yolov8_def__msg__TargetOffset__Sequence__are_equal(const yolov8_def__msg__TargetOffset__Sequence * lhs, const yolov8_def__msg__TargetOffset__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yolov8_def__msg__TargetOffset__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yolov8_def__msg__TargetOffset__Sequence__copy(
  const yolov8_def__msg__TargetOffset__Sequence * input,
  yolov8_def__msg__TargetOffset__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yolov8_def__msg__TargetOffset);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yolov8_def__msg__TargetOffset * data =
      (yolov8_def__msg__TargetOffset *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yolov8_def__msg__TargetOffset__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yolov8_def__msg__TargetOffset__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yolov8_def__msg__TargetOffset__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
