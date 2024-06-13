#include <stdio.h>
#include <stdlib.h>
#include "operations.h"
#include "utils.h"

// Function to check if two arrays have compatible shapes
static int check_shape_compatibility(const Array *a, const Array *b) {
    if (a->ndim != b->ndim || a->size != b->size) {
        return 0; // Incompatible shapes
    }
    for (int i = 0; i < a->ndim; i++) {
        if (a->shape[i] != b->shape[i]) {
            return 0; // Incompatible shapes
        }
    }
    return 1; // Shapes are compatible
}

Array* add_arrays(const Array *a, const Array *b) {
    if (!check_shape_compatibility(a, b)) {
        fprintf(stderr, "Error: Arrays must have the same shape for addition.\n");
        return NULL;
    }
    Array *result = create_array(a->shape, a->ndim);
    check_allocation(result, "Failed to allocate memory for result array in add_arrays.");
    for (int i = 0; i < a->size; i++) {
        result->data[i] = a->data[i] + b->data[i];
    }
    return result;
}

Array* subtract_arrays(const Array *a, const Array *b) {
    if (!check_shape_compatibility(a, b)) {
        fprintf(stderr, "Error: Arrays must have the same shape for subtraction.\n");
        return NULL;
    }
    Array *result = create_array(a->shape, a->ndim);
    check_allocation(result, "Failed to allocate memory for result array in subtract_arrays.");
    for (int i = 0; i < a->size; i++) {
        result->data[i] = a->data[i] - b->data[i];
    }
    return result;
}

Array* multiply_arrays(const Array *a, const Array *b) {
    if (!check_shape_compatibility(a, b)) {
        fprintf(stderr, "Error: Arrays must have the same shape for multiplication.\n");
        return NULL;
    }
    Array *result = create_array(a->shape, a->ndim);
    check_allocation(result, "Failed to allocate memory for result array in multiply_arrays.");
    for (int i = 0; i < a->size; i++) {
        result->data[i] = a->data[i] * b->data[i];
    }
    return result;
}

Array* divide_arrays(const Array *a, const Array *b) {
    if (!check_shape_compatibility(a, b)) {
        fprintf(stderr, "Error: Arrays must have the same shape for division.\n");
        return NULL;
    }
    Array *result = create_array(a->shape, a->ndim);
    check_allocation(result, "Failed to allocate memory for result array in divide_arrays.");
    for (int i = 0; i < a->size; i++) {
        if (b->data[i] == 0) {
            fprintf(stderr, "Error: Division by zero at index %d.\n", i);
            free_array(result);
            return NULL;
        }
        result->data[i] = a->data[i] / b->data[i];
    }
    return result;
}