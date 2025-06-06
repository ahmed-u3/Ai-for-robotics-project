// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from yolov8_msgs:msg/InferenceResult.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "yolov8_msgs/msg/detail/inference_result__rosidl_typesupport_introspection_c.h"
#include "yolov8_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "yolov8_msgs/msg/detail/inference_result__functions.h"
#include "yolov8_msgs/msg/detail/inference_result__struct.h"


// Include directives for member types
// Member `class_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `coordinates`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void yolov8_msgs__msg__InferenceResult__rosidl_typesupport_introspection_c__InferenceResult_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  yolov8_msgs__msg__InferenceResult__init(message_memory);
}

void yolov8_msgs__msg__InferenceResult__rosidl_typesupport_introspection_c__InferenceResult_fini_function(void * message_memory)
{
  yolov8_msgs__msg__InferenceResult__fini(message_memory);
}

size_t yolov8_msgs__msg__InferenceResult__rosidl_typesupport_introspection_c__size_function__InferenceResult__coordinates(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * yolov8_msgs__msg__InferenceResult__rosidl_typesupport_introspection_c__get_const_function__InferenceResult__coordinates(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * yolov8_msgs__msg__InferenceResult__rosidl_typesupport_introspection_c__get_function__InferenceResult__coordinates(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void yolov8_msgs__msg__InferenceResult__rosidl_typesupport_introspection_c__fetch_function__InferenceResult__coordinates(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    yolov8_msgs__msg__InferenceResult__rosidl_typesupport_introspection_c__get_const_function__InferenceResult__coordinates(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void yolov8_msgs__msg__InferenceResult__rosidl_typesupport_introspection_c__assign_function__InferenceResult__coordinates(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    yolov8_msgs__msg__InferenceResult__rosidl_typesupport_introspection_c__get_function__InferenceResult__coordinates(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool yolov8_msgs__msg__InferenceResult__rosidl_typesupport_introspection_c__resize_function__InferenceResult__coordinates(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember yolov8_msgs__msg__InferenceResult__rosidl_typesupport_introspection_c__InferenceResult_message_member_array[2] = {
  {
    "class_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yolov8_msgs__msg__InferenceResult, class_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "coordinates",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yolov8_msgs__msg__InferenceResult, coordinates),  // bytes offset in struct
    NULL,  // default value
    yolov8_msgs__msg__InferenceResult__rosidl_typesupport_introspection_c__size_function__InferenceResult__coordinates,  // size() function pointer
    yolov8_msgs__msg__InferenceResult__rosidl_typesupport_introspection_c__get_const_function__InferenceResult__coordinates,  // get_const(index) function pointer
    yolov8_msgs__msg__InferenceResult__rosidl_typesupport_introspection_c__get_function__InferenceResult__coordinates,  // get(index) function pointer
    yolov8_msgs__msg__InferenceResult__rosidl_typesupport_introspection_c__fetch_function__InferenceResult__coordinates,  // fetch(index, &value) function pointer
    yolov8_msgs__msg__InferenceResult__rosidl_typesupport_introspection_c__assign_function__InferenceResult__coordinates,  // assign(index, value) function pointer
    yolov8_msgs__msg__InferenceResult__rosidl_typesupport_introspection_c__resize_function__InferenceResult__coordinates  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers yolov8_msgs__msg__InferenceResult__rosidl_typesupport_introspection_c__InferenceResult_message_members = {
  "yolov8_msgs__msg",  // message namespace
  "InferenceResult",  // message name
  2,  // number of fields
  sizeof(yolov8_msgs__msg__InferenceResult),
  false,  // has_any_key_member_
  yolov8_msgs__msg__InferenceResult__rosidl_typesupport_introspection_c__InferenceResult_message_member_array,  // message members
  yolov8_msgs__msg__InferenceResult__rosidl_typesupport_introspection_c__InferenceResult_init_function,  // function to initialize message memory (memory has to be allocated)
  yolov8_msgs__msg__InferenceResult__rosidl_typesupport_introspection_c__InferenceResult_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t yolov8_msgs__msg__InferenceResult__rosidl_typesupport_introspection_c__InferenceResult_message_type_support_handle = {
  0,
  &yolov8_msgs__msg__InferenceResult__rosidl_typesupport_introspection_c__InferenceResult_message_members,
  get_message_typesupport_handle_function,
  &yolov8_msgs__msg__InferenceResult__get_type_hash,
  &yolov8_msgs__msg__InferenceResult__get_type_description,
  &yolov8_msgs__msg__InferenceResult__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_yolov8_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yolov8_msgs, msg, InferenceResult)() {
  if (!yolov8_msgs__msg__InferenceResult__rosidl_typesupport_introspection_c__InferenceResult_message_type_support_handle.typesupport_identifier) {
    yolov8_msgs__msg__InferenceResult__rosidl_typesupport_introspection_c__InferenceResult_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &yolov8_msgs__msg__InferenceResult__rosidl_typesupport_introspection_c__InferenceResult_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
