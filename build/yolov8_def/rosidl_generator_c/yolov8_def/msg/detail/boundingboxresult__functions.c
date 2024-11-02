// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from yolov8_def:msg/Boundingboxresult.idl
// generated code does not contain a copyright notice
#include "yolov8_def/msg/detail/boundingboxresult__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `class_name`
#include "rosidl_runtime_c/string_functions.h"

bool
yolov8_def__msg__Boundingboxresult__init(yolov8_def__msg__Boundingboxresult * msg)
{
  if (!msg) {
    return false;
  }
  // class_name
  if (!rosidl_runtime_c__String__init(&msg->class_name)) {
    yolov8_def__msg__Boundingboxresult__fini(msg);
    return false;
  }
  // top
  // left
  // bottom
  // right
  // confidence
  return true;
}

void
yolov8_def__msg__Boundingboxresult__fini(yolov8_def__msg__Boundingboxresult * msg)
{
  if (!msg) {
    return;
  }
  // class_name
  rosidl_runtime_c__String__fini(&msg->class_name);
  // top
  // left
  // bottom
  // right
  // confidence
}

bool
yolov8_def__msg__Boundingboxresult__are_equal(const yolov8_def__msg__Boundingboxresult * lhs, const yolov8_def__msg__Boundingboxresult * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // class_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->class_name), &(rhs->class_name)))
  {
    return false;
  }
  // top
  if (lhs->top != rhs->top) {
    return false;
  }
  // left
  if (lhs->left != rhs->left) {
    return false;
  }
  // bottom
  if (lhs->bottom != rhs->bottom) {
    return false;
  }
  // right
  if (lhs->right != rhs->right) {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  return true;
}

bool
yolov8_def__msg__Boundingboxresult__copy(
  const yolov8_def__msg__Boundingboxresult * input,
  yolov8_def__msg__Boundingboxresult * output)
{
  if (!input || !output) {
    return false;
  }
  // class_name
  if (!rosidl_runtime_c__String__copy(
      &(input->class_name), &(output->class_name)))
  {
    return false;
  }
  // top
  output->top = input->top;
  // left
  output->left = input->left;
  // bottom
  output->bottom = input->bottom;
  // right
  output->right = input->right;
  // confidence
  output->confidence = input->confidence;
  return true;
}

yolov8_def__msg__Boundingboxresult *
yolov8_def__msg__Boundingboxresult__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yolov8_def__msg__Boundingboxresult * msg = (yolov8_def__msg__Boundingboxresult *)allocator.allocate(sizeof(yolov8_def__msg__Boundingboxresult), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yolov8_def__msg__Boundingboxresult));
  bool success = yolov8_def__msg__Boundingboxresult__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yolov8_def__msg__Boundingboxresult__destroy(yolov8_def__msg__Boundingboxresult * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yolov8_def__msg__Boundingboxresult__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yolov8_def__msg__Boundingboxresult__Sequence__init(yolov8_def__msg__Boundingboxresult__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yolov8_def__msg__Boundingboxresult * data = NULL;

  if (size) {
    data = (yolov8_def__msg__Boundingboxresult *)allocator.zero_allocate(size, sizeof(yolov8_def__msg__Boundingboxresult), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yolov8_def__msg__Boundingboxresult__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yolov8_def__msg__Boundingboxresult__fini(&data[i - 1]);
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
yolov8_def__msg__Boundingboxresult__Sequence__fini(yolov8_def__msg__Boundingboxresult__Sequence * array)
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
      yolov8_def__msg__Boundingboxresult__fini(&array->data[i]);
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

yolov8_def__msg__Boundingboxresult__Sequence *
yolov8_def__msg__Boundingboxresult__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yolov8_def__msg__Boundingboxresult__Sequence * array = (yolov8_def__msg__Boundingboxresult__Sequence *)allocator.allocate(sizeof(yolov8_def__msg__Boundingboxresult__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yolov8_def__msg__Boundingboxresult__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yolov8_def__msg__Boundingboxresult__Sequence__destroy(yolov8_def__msg__Boundingboxresult__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yolov8_def__msg__Boundingboxresult__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yolov8_def__msg__Boundingboxresult__Sequence__are_equal(const yolov8_def__msg__Boundingboxresult__Sequence * lhs, const yolov8_def__msg__Boundingboxresult__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yolov8_def__msg__Boundingboxresult__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yolov8_def__msg__Boundingboxresult__Sequence__copy(
  const yolov8_def__msg__Boundingboxresult__Sequence * input,
  yolov8_def__msg__Boundingboxresult__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yolov8_def__msg__Boundingboxresult);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yolov8_def__msg__Boundingboxresult * data =
      (yolov8_def__msg__Boundingboxresult *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yolov8_def__msg__Boundingboxresult__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yolov8_def__msg__Boundingboxresult__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yolov8_def__msg__Boundingboxresult__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
