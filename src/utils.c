#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"
#include "array.h"

// Function to check if memory allocation was successful
void check_allocation(void *ptr, const char *message) {
    if (ptr == NULL) {
        fprintf(stderr, "%s\n", message);
        exit(EXIT_FAILURE);
    }
}

// Function to reshape an array
Array* reshape_array(const Array *array, const int *new_shape, int new_ndim) {
    int new_size = get_array_size(new_shape, new_ndim);
    if (new_size != array->size) {
        fprintf(stderr, "Error: New shape is incompatible with the size of the array.\n");
        return NULL;
    }

    Array *reshaped_array = create_array(new_shape, new_ndim);
    check_allocation(reshaped_array, "Failed to allocate memory for reshaped array in reshape_array.");
    memcpy(reshaped_array->data, array->data, array->size * sizeof(int));
    return reshaped_array;
}

// Function to copy an array
Array* copy_array(const Array *array) {
    Array *copy = create_array(array->shape, array->ndim);
    check_allocation(copy, "Failed to allocate memory for copied array in copy_array.");
    memcpy(copy->data, array->data, array->size * sizeof(int));
    return copy;
}

// Function to compare two arrays for equality
int compare_arrays(const Array *a, const Array *b) {
    if (a->ndim != b->ndim || a->size != b->size) {
        return 0; // Arrays are not equal
    }
    for (int i = 0; i < a->ndim; i++) {
        if (a->shape[i] != b->shape[i]) {
            return 0; // Arrays are not equal
        }
    }
    for (int i = 0; i < a->size; i++) {
        if (a->data[i] != b->data[i]) {
            return 0; // Arrays are not equal
        }
    }
    return 1; // Arrays are equal
}