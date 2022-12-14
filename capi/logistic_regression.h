/**
 * @file capi/logistic_regression.h
 *
 * This is an autogenerated header file for functions specified to the %NAME%
 * binding to be called by Go.
 */
#ifndef GO_logistic_regression_H
#define GO_logistic_regression_H

#include <stddef.h>

#if defined(__cplusplus) || defined(c_plusplus)

extern "C"
{
#endif

extern void mlpackLogisticRegression(void* params, void* timers);

// Any definitions of methods for dealing with model pointers will be put below
// this comment, if needed.

// Set the pointer to a LogisticRegression<> parameter.
extern void mlpackSetLogisticRegressionPtr(void* params,
                                           const char* identifier,
                                           void* value);

// Get the pointer to a LogisticRegression<> parameter.
extern void* mlpackGetLogisticRegressionPtr(void* params,
                                            const char* identifier);


#if defined(__cplusplus) || defined(c_plusplus)
}
#endif

#endif
