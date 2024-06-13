#include <stdio.h>
#include "array.h"
#include "operations.h"
#include "utils.h"

void test_add_arrays() {
    int shape[2] = {2, 3};
    Array *array1 = create_array(shape, 2);
    Array *array2 = create_array(shape, 2);

    // Initialize arrays with sample data
    for (int i = 0; i < array1->size; i++) {
        array1->data[i] = i + 1;
        array2->data[i] = (i + 1) * 2;
    }

    printf("Testing add_arrays:\n");
    print_array(array1);
    print_array(array2);

    Array *result = add_arrays(array1, array2);
    if (result != NULL) {
        printf("Result of addition:\n");
        print_array(result);
        free_array(result);
    } else {
        printf("Addition failed.\n");
    }

    // Free arrays
    free_array(array1);
    free_array(array2);
}

void test_subtract_arrays() {
    int shape[2] = {2, 3};
    Array *array1 = create_array(shape, 2);
    Array *array2 = create_array(shape, 2);

    // Initialize arrays with sample data
    for (int i = 0; i < array1->size; i++) {
        array1->data[i] = i + 1;
        array2->data[i] = (i + 1) * 2;
    }

    printf("Testing subtract_arrays:\n");
    print_array(array1);
    print_array(array2);

    Array *result = subtract_arrays(array1, array2);
    if (result != NULL) {
        printf("Result of subtraction:\n");
        print_array(result);
        free_array(result);
    } else {
        printf("Subtraction failed.\n");
    }

    // Free arrays
    free_array(array1);
    free_array(array2);
}

void test_multiply_arrays() {
    int shape[2] = {2, 3};
    Array *array1 = create_array(shape, 2);
    Array *array2 = create_array(shape, 2);

    // Initialize arrays with sample data
    for (int i = 0; i < array1->size; i++) {
        array1->data[i] = i + 1;
        array2->data[i] = (i + 1) * 2;
    }

    printf("Testing multiply_arrays:\n");
    print_array(array1);
    print_array(array2);

    Array *result = multiply_arrays(array1, array2);
    if (result != NULL) {
        printf("Result of multiplication:\n");
        print_array(result);
        free_array(result);
    } else {
        printf("Multiplication failed.\n");
    }

    // Free arrays
    free_array(array1);
    free_array(array2);
}

void test_divide_arrays() {
    int shape[2] = {2, 3};
    Array *array1 = create_array(shape, 2);
    Array *array2 = create_array(shape, 2);

    // Initialize arrays with sample data
    for (int i = 0; i < array1->size; i++) {
        array1->data[i] = (i + 1) * 2;
        array2->data[i] = i + 1;
    }

    printf("Testing divide_arrays:\n");
    print_array(array1);
    print_array(array2);

    Array *result = divide_arrays(array1, array2);
    if (result != NULL) {
        printf("Result of division:\n");
        print_array(result);
        free_array(result);
    } else {
        printf("Division failed.\n");
    }

    // Free arrays
    free_array(array1);
    free_array(array2);
}

int main() {
    printf("Running tests for array operations...\n\n");

    test_add_arrays();
    printf("\n");

    test_subtract_arrays();
    printf("\n");

    test_multiply_arrays();
    printf("\n");

    test_divide_arrays();
    printf("\n");

    printf("Tests completed.\n");
    return 0;
}