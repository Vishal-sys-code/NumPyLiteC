#ifndef ARRAY_H
#define ARRAY_H

#include <stddef.h> // For size_t

// Define the Array struct
typedef struct {
    int *data;     // Pointer to the data buffer
    int ndim;      // Number of dimensions
    int *shape;    // Array containing the size of each dimension
    int size;      // Total number of elements in the array
} Array;

// Function to create an array with the specified shape and number of dimensions
Array* create_array(const int *shape, int ndim);

// Function to free the memory allocated for an array
void free_array(Array *array);

// Function to get the total number of elements in the array
int get_array_size(const int *shape, int ndim);

// Function to print the array (for debugging purposes)
void print_array(const Array *array);

#endif // ARRAY_H