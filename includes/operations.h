#ifndef OPERATIONS_H
#define OPERATIONS_H

#include "array.h"

// Function to add two arrays element-wise
Array* add_arrays(const Array *a, const Array *b);

// Function to subtract the second array from the first array element-wise
Array* subtract_arrays(const Array *a, const Array *b);

// Function to multiply two arrays element-wise
Array* multiply_arrays(const Array *a, const Array *b);

// Function to divide the first array by the second array element-wise
Array* divide_arrays(const Array *a, const Array *b);

#endif // OPERATIONS_H