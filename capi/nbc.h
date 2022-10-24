/**
 * @file capi/nbc.h
 *
 * This is an autogenerated header file for functions specified to the %NAME%
 * binding to be called by Go.
 */
#ifndef GO_nbc_H
#define GO_nbc_H

#include <stddef.h>

#if defined(__cplusplus) || defined(c_plusplus)

extern "C"
{
#endif

extern void mlpackNbc(void* params, void* timers);

// Any definitions of methods for dealing with model pointers will be put below
// this comment, if needed.

// Set the pointer to a NBCModel parameter.
extern void mlpackSetNBCModelPtr(void* params,
                                           const char* identifier,
                                           void* value);

// Get the pointer to a NBCModel parameter.
extern void* mlpackGetNBCModelPtr(void* params,
                                            const char* identifier);


#if defined(__cplusplus) || defined(c_plusplus)
}
#endif

#endif
