/**
 * @file capi/local_coordinate_coding.h
 *
 * This is an autogenerated header file for functions specified to the %NAME%
 * binding to be called by Go.
 */
#ifndef GO_local_coordinate_coding_H
#define GO_local_coordinate_coding_H

#include <stddef.h>

#if defined(__cplusplus) || defined(c_plusplus)

extern "C"
{
#endif

extern void mlpackLocalCoordinateCoding();

// Any definitions of methods for dealing with model pointers will be put below
// this comment, if needed.

// Set the pointer to a LocalCoordinateCoding parameter.
extern void mlpackSetLocalCoordinateCodingPtr(const char* identifier, void* value);

// Get the pointer to a LocalCoordinateCoding parameter.
extern void* mlpackGetLocalCoordinateCodingPtr(const char* identifier);


#if defined(__cplusplus) || defined(c_plusplus)
}
#endif

#endif
