#include <stdio.h>
#include "array.h"
#include "utils.h"

void test_check_allocation() {
    printf("Testing check_allocation:\n");

    int *ptr = malloc(sizeof(int) * 10);
    check_allocation(ptr, "Memory allocation failed in test_check_allocation.");

    printf("Memory allocation successful.\n");

    free(ptr);
}

void test_reshape_array() {
    int shape[2] = {2, 3};
    Array *array = create_array(shape, 2);

    // Initialize array with sample data
    for (int i = 0; i < array->size; i++) {
        array->data[i] = i + 1;
    }

    printf("Testing reshape_array:\n");
    printf("Original array:\n");
    print_array(array);

    int new_shape[2] = {3, 2};
    Array *reshaped_array = reshape_array(array, new_shape, 2);

    if (reshaped_array != NULL) {
        printf("Reshaped array:\n");
        print_array(reshaped_array);
        free_array(reshaped_array);
    } else {
        printf("Reshape failed.\n");
    }

    // Free arrays
    free_array(array);
}

void test_copy_array() {
    int shape[2] = {2, 3};
    Array *array = create_array(shape, 2);

    // Initialize array with sample data
    for (int i = 0; i < array->size; i++) {
        array->data[i] = i + 1;
    }

    printf("Testing copy_array:\n");
    printf("Original array:\n");
    print_array(array);

    Array *copy = copy_array(array);

    if (copy != NULL) {
        printf("Copied array:\n");
        print_array(copy);
        free_array(copy);
    } else {
        printf("Copy failed.\n");
    }

    // Free arrays
    free_array(array);
}

void test_compare_arrays() {
    int shape[2] = {2, 3};
    Array *array1 = create_array(shape, 2);
    Array *array2 = create_array(shape, 2);
    Array *array3 = create_array(shape, 2);

    // Initialize arrays with sample data
    for (int i = 0; i < array1->size; i++) {
        array1->data[i] = i + 1;
        array2->data[i] = i + 1;
        array3->data[i] = (i + 1) * 2;
    }

    printf("Testing compare_arrays:\n");
    printf("Array 1:\n");
    print_array(array1);
    printf("Array 2:\n");
    print_array(array2);
    printf("Array 3:\n");
    print_array(array3);

    if (compare_arrays(array1, array2)) {
        printf("Array 1 is equal to Array 2.\n");
    } else {
        printf("Array 1 is not equal to Array 2.\n");
    }

    if (compare_arrays(array1, array3)) {
        printf("Array 1 is equal to Array 3.\n");
    } else {
        printf("Array 1 is not equal to Array 3.\n");
    }

    // Free arrays
    free_array(array1);
    free_array(array2);
    free_array(array3);
}

int main() {
    printf("Running tests for utility functions...\n\n");

    test_check_allocation();
    printf("\n");

    test_reshape_array();
    printf("\n");

    test_copy_array();
    printf("\n");

    test_compare_arrays();
    printf("\n");

    printf("Tests completed.\n");
    return 0;
}