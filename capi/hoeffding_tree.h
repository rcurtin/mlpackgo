/**
 * @file capi/hoeffding_tree.h
 *
 * This is an autogenerated header file for functions specified to the %NAME%
 * binding to be called by Go.
 */
#ifndef GO_hoeffding_tree_H
#define GO_hoeffding_tree_H

#include <stddef.h>

#if defined(__cplusplus) || defined(c_plusplus)

extern "C"
{
#endif

extern void mlpackHoeffdingTree(void* params, void* timers);

// Any definitions of methods for dealing with model pointers will be put below
// this comment, if needed.

// Set the pointer to a HoeffdingTreeModel parameter.
extern void mlpackSetHoeffdingTreeModelPtr(void* params,
                                           const char* identifier,
                                           void* value);

// Get the pointer to a HoeffdingTreeModel parameter.
extern void* mlpackGetHoeffdingTreeModelPtr(void* params,
                                            const char* identifier);


#if defined(__cplusplus) || defined(c_plusplus)
}
#endif

#endif
