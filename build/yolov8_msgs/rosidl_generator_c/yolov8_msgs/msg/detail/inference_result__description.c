// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from yolov8_msgs:msg/InferenceResult.idl
// generated code does not contain a copyright notice

#include "yolov8_msgs/msg/detail/inference_result__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_yolov8_msgs
const rosidl_type_hash_t *
yolov8_msgs__msg__InferenceResult__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf8, 0x84, 0x51, 0x4c, 0x17, 0x8e, 0xdd, 0xeb,
      0xa4, 0x84, 0x04, 0x79, 0x21, 0x3c, 0x91, 0xd4,
      0x6c, 0x2a, 0x5b, 0xee, 0xe1, 0xf9, 0xc1, 0x75,
      0x01, 0x86, 0xa3, 0x28, 0x08, 0xf4, 0x45, 0x2d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char yolov8_msgs__msg__InferenceResult__TYPE_NAME[] = "yolov8_msgs/msg/InferenceResult";

// Define type names, field names, and default values
static char yolov8_msgs__msg__InferenceResult__FIELD_NAME__class_name[] = "class_name";
static char yolov8_msgs__msg__InferenceResult__FIELD_NAME__coordinates[] = "coordinates";

static rosidl_runtime_c__type_description__Field yolov8_msgs__msg__InferenceResult__FIELDS[] = {
  {
    {yolov8_msgs__msg__InferenceResult__FIELD_NAME__class_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {yolov8_msgs__msg__InferenceResult__FIELD_NAME__coordinates, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
yolov8_msgs__msg__InferenceResult__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {yolov8_msgs__msg__InferenceResult__TYPE_NAME, 31, 31},
      {yolov8_msgs__msg__InferenceResult__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string class_name\n"
  "float64[] coordinates";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
yolov8_msgs__msg__InferenceResult__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {yolov8_msgs__msg__InferenceResult__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 40, 40},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
yolov8_msgs__msg__InferenceResult__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *yolov8_msgs__msg__InferenceResult__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
