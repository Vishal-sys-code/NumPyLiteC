#ifndef UTILS_H
#define UTILS_H

#include "array.h"

// Function to check if memory allocation was successful
void check_allocation(void *ptr, const char *message);

// Function to reshape an array
Array* reshape_array(const Array *array, const int *new_shape, int new_ndim);

// Function to copy an array
Array* copy_array(const Array *array);

// Function to compare two arrays for equality
int compare_arrays(const Array *a, const Array *b);

#endif // UTILS_H