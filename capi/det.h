/**
 * @file capi/det.h
 *
 * This is an autogenerated header file for functions specified to the %NAME%
 * binding to be called by Go.
 */
#ifndef GO_det_H
#define GO_det_H

#include <stddef.h>

#if defined(__cplusplus) || defined(c_plusplus)

extern "C"
{
#endif

extern void mlpackDet(void* params, void* timers);

// Any definitions of methods for dealing with model pointers will be put below
// this comment, if needed.

// Set the pointer to a DTree<> parameter.
extern void mlpackSetDTreePtr(void* params,
                                           const char* identifier,
                                           void* value);

// Get the pointer to a DTree<> parameter.
extern void* mlpackGetDTreePtr(void* params,
                                            const char* identifier);


#if defined(__cplusplus) || defined(c_plusplus)
}
#endif

#endif
