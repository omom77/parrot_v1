// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from parrot_v1_msgs:srv/QuaternionToEuler.idl
// generated code does not contain a copyright notice

#ifndef PARROT_V1_MSGS__SRV__DETAIL__QUATERNION_TO_EULER__FUNCTIONS_H_
#define PARROT_V1_MSGS__SRV__DETAIL__QUATERNION_TO_EULER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "parrot_v1_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "parrot_v1_msgs/srv/detail/quaternion_to_euler__struct.h"

/// Initialize srv/QuaternionToEuler message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * parrot_v1_msgs__srv__QuaternionToEuler_Request
 * )) before or use
 * parrot_v1_msgs__srv__QuaternionToEuler_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_parrot_v1_msgs
bool
parrot_v1_msgs__srv__QuaternionToEuler_Request__init(parrot_v1_msgs__srv__QuaternionToEuler_Request * msg);

/// Finalize srv/QuaternionToEuler message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_parrot_v1_msgs
void
parrot_v1_msgs__srv__QuaternionToEuler_Request__fini(parrot_v1_msgs__srv__QuaternionToEuler_Request * msg);

/// Create srv/QuaternionToEuler message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * parrot_v1_msgs__srv__QuaternionToEuler_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_parrot_v1_msgs
parrot_v1_msgs__srv__QuaternionToEuler_Request *
parrot_v1_msgs__srv__QuaternionToEuler_Request__create();

/// Destroy srv/QuaternionToEuler message.
/**
 * It calls
 * parrot_v1_msgs__srv__QuaternionToEuler_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_parrot_v1_msgs
void
parrot_v1_msgs__srv__QuaternionToEuler_Request__destroy(parrot_v1_msgs__srv__QuaternionToEuler_Request * msg);

/// Check for srv/QuaternionToEuler message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_parrot_v1_msgs
bool
parrot_v1_msgs__srv__QuaternionToEuler_Request__are_equal(const parrot_v1_msgs__srv__QuaternionToEuler_Request * lhs, const parrot_v1_msgs__srv__QuaternionToEuler_Request * rhs);

/// Copy a srv/QuaternionToEuler message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_parrot_v1_msgs
bool
parrot_v1_msgs__srv__QuaternionToEuler_Request__copy(
  const parrot_v1_msgs__srv__QuaternionToEuler_Request * input,
  parrot_v1_msgs__srv__QuaternionToEuler_Request * output);

/// Initialize array of srv/QuaternionToEuler messages.
/**
 * It allocates the memory for the number of elements and calls
 * parrot_v1_msgs__srv__QuaternionToEuler_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_parrot_v1_msgs
bool
parrot_v1_msgs__srv__QuaternionToEuler_Request__Sequence__init(parrot_v1_msgs__srv__QuaternionToEuler_Request__Sequence * array, size_t size);

/// Finalize array of srv/QuaternionToEuler messages.
/**
 * It calls
 * parrot_v1_msgs__srv__QuaternionToEuler_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_parrot_v1_msgs
void
parrot_v1_msgs__srv__QuaternionToEuler_Request__Sequence__fini(parrot_v1_msgs__srv__QuaternionToEuler_Request__Sequence * array);

/// Create array of srv/QuaternionToEuler messages.
/**
 * It allocates the memory for the array and calls
 * parrot_v1_msgs__srv__QuaternionToEuler_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_parrot_v1_msgs
parrot_v1_msgs__srv__QuaternionToEuler_Request__Sequence *
parrot_v1_msgs__srv__QuaternionToEuler_Request__Sequence__create(size_t size);

/// Destroy array of srv/QuaternionToEuler messages.
/**
 * It calls
 * parrot_v1_msgs__srv__QuaternionToEuler_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_parrot_v1_msgs
void
parrot_v1_msgs__srv__QuaternionToEuler_Request__Sequence__destroy(parrot_v1_msgs__srv__QuaternionToEuler_Request__Sequence * array);

/// Check for srv/QuaternionToEuler message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_parrot_v1_msgs
bool
parrot_v1_msgs__srv__QuaternionToEuler_Request__Sequence__are_equal(const parrot_v1_msgs__srv__QuaternionToEuler_Request__Sequence * lhs, const parrot_v1_msgs__srv__QuaternionToEuler_Request__Sequence * rhs);

/// Copy an array of srv/QuaternionToEuler messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_parrot_v1_msgs
bool
parrot_v1_msgs__srv__QuaternionToEuler_Request__Sequence__copy(
  const parrot_v1_msgs__srv__QuaternionToEuler_Request__Sequence * input,
  parrot_v1_msgs__srv__QuaternionToEuler_Request__Sequence * output);

/// Initialize srv/QuaternionToEuler message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * parrot_v1_msgs__srv__QuaternionToEuler_Response
 * )) before or use
 * parrot_v1_msgs__srv__QuaternionToEuler_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_parrot_v1_msgs
bool
parrot_v1_msgs__srv__QuaternionToEuler_Response__init(parrot_v1_msgs__srv__QuaternionToEuler_Response * msg);

/// Finalize srv/QuaternionToEuler message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_parrot_v1_msgs
void
parrot_v1_msgs__srv__QuaternionToEuler_Response__fini(parrot_v1_msgs__srv__QuaternionToEuler_Response * msg);

/// Create srv/QuaternionToEuler message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * parrot_v1_msgs__srv__QuaternionToEuler_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_parrot_v1_msgs
parrot_v1_msgs__srv__QuaternionToEuler_Response *
parrot_v1_msgs__srv__QuaternionToEuler_Response__create();

/// Destroy srv/QuaternionToEuler message.
/**
 * It calls
 * parrot_v1_msgs__srv__QuaternionToEuler_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_parrot_v1_msgs
void
parrot_v1_msgs__srv__QuaternionToEuler_Response__destroy(parrot_v1_msgs__srv__QuaternionToEuler_Response * msg);

/// Check for srv/QuaternionToEuler message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_parrot_v1_msgs
bool
parrot_v1_msgs__srv__QuaternionToEuler_Response__are_equal(const parrot_v1_msgs__srv__QuaternionToEuler_Response * lhs, const parrot_v1_msgs__srv__QuaternionToEuler_Response * rhs);

/// Copy a srv/QuaternionToEuler message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_parrot_v1_msgs
bool
parrot_v1_msgs__srv__QuaternionToEuler_Response__copy(
  const parrot_v1_msgs__srv__QuaternionToEuler_Response * input,
  parrot_v1_msgs__srv__QuaternionToEuler_Response * output);

/// Initialize array of srv/QuaternionToEuler messages.
/**
 * It allocates the memory for the number of elements and calls
 * parrot_v1_msgs__srv__QuaternionToEuler_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_parrot_v1_msgs
bool
parrot_v1_msgs__srv__QuaternionToEuler_Response__Sequence__init(parrot_v1_msgs__srv__QuaternionToEuler_Response__Sequence * array, size_t size);

/// Finalize array of srv/QuaternionToEuler messages.
/**
 * It calls
 * parrot_v1_msgs__srv__QuaternionToEuler_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_parrot_v1_msgs
void
parrot_v1_msgs__srv__QuaternionToEuler_Response__Sequence__fini(parrot_v1_msgs__srv__QuaternionToEuler_Response__Sequence * array);

/// Create array of srv/QuaternionToEuler messages.
/**
 * It allocates the memory for the array and calls
 * parrot_v1_msgs__srv__QuaternionToEuler_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_parrot_v1_msgs
parrot_v1_msgs__srv__QuaternionToEuler_Response__Sequence *
parrot_v1_msgs__srv__QuaternionToEuler_Response__Sequence__create(size_t size);

/// Destroy array of srv/QuaternionToEuler messages.
/**
 * It calls
 * parrot_v1_msgs__srv__QuaternionToEuler_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_parrot_v1_msgs
void
parrot_v1_msgs__srv__QuaternionToEuler_Response__Sequence__destroy(parrot_v1_msgs__srv__QuaternionToEuler_Response__Sequence * array);

/// Check for srv/QuaternionToEuler message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_parrot_v1_msgs
bool
parrot_v1_msgs__srv__QuaternionToEuler_Response__Sequence__are_equal(const parrot_v1_msgs__srv__QuaternionToEuler_Response__Sequence * lhs, const parrot_v1_msgs__srv__QuaternionToEuler_Response__Sequence * rhs);

/// Copy an array of srv/QuaternionToEuler messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_parrot_v1_msgs
bool
parrot_v1_msgs__srv__QuaternionToEuler_Response__Sequence__copy(
  const parrot_v1_msgs__srv__QuaternionToEuler_Response__Sequence * input,
  parrot_v1_msgs__srv__QuaternionToEuler_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PARROT_V1_MSGS__SRV__DETAIL__QUATERNION_TO_EULER__FUNCTIONS_H_
