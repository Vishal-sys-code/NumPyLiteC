#include <stdio.h>
#include <stdlib.h>
#include "array.h"
#include "utils.h" // Including utils.h for utility functions

Array* create_array(const int *shape, int ndim) {
    // Allocate memory for the Array struct
    Array *array = (Array *)malloc(sizeof(Array));
    check_allocation(array, "Failed to allocate memory for array struct.");
    
    // Allocate memory for the shape array
    array->shape = (int *)malloc(ndim * sizeof(int));
    check_allocation(array->shape, "Failed to allocate memory for array shape.");
    
    // Set the number of dimensions
    array->ndim = ndim;
    
    // Copy the shape and calculate the total size of the array
    array->size = 1;
    for (int i = 0; i < ndim; i++) {
        array->shape[i] = shape[i];
        array->size *= shape[i];
    }
    
    // Allocate memory for the data buffer
    array->data = (int *)malloc(array->size * sizeof(int));
    check_allocation(array->data, "Failed to allocate memory for array data.");
    
    return array;
}

void free_array(Array *array) {
    if (array != NULL) {
        free(array->data);   // Free the data buffer
        free(array->shape);  // Free the shape array
        free(array);         // Free the Array struct itself
    }
}

int get_array_size(const int *shape, int ndim) {
    int size = 1;
    for (int i = 0; i < ndim; i++) {
        size *= shape[i];
    }
    return size;
}

void print_array(const Array *array) {
    if (array == NULL) {
        printf("Array is NULL.\n");
        return;
    }

    printf("Array (shape: [");
    for (int i = 0; i < array->ndim; i++) {
        printf("%d", array->shape[i]);
        if (i < array->ndim - 1) {
            printf(", ");
        }
    }
    printf("], size: %d):\n", array->size);

    for (int i = 0; i < array->size; i++) {
        printf("%d", array->data[i]);
        if ((i + 1) % array->shape[array->ndim - 1] == 0) {
            printf("\n");
        } else {
            printf(" ");
        }
    }
}