#include <stdio.h>
#include "array.h"

void test_create_and_print_array() {
    int shape[2] = {2, 3};
    Array *array = create_array(shape, 2);

    // Initialize array with sample data
    for (int i = 0; i < array->size; i++) {
        array->data[i] = i + 1;
    }

    printf("Array created and printed:\n");
    print_array(array);

    // Free array
    free_array(array);
}

int main() {
    printf("Running tests for array operations...\n\n");

    test_create_and_print_array();

    printf("\nTests completed.\n");
    return 0;
}