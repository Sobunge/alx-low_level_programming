#include <stdio.h>

int advanced_binary_recursive(int *array, int low, int high, int value);

int advanced_binary(int *array, size_t size, int value) {
    if (array == NULL || size == 0) {
        return -1;
    }

    return advanced_binary_recursive(array, 0, size - 1, value);
}

int advanced_binary_recursive(int *array, int low, int high, int value) {
    if (low > high) {
        return -1;  // Value not found
    }

    int mid = low + (high - low) / 2;

    printf("Searching in array: ");
    for (int i = low; i <= high; i++) {
        printf("%d", array[i]);
        if (i < high) {
            printf(", ");
        }
    }
    printf("\n");

    if (array[mid] == value) {
        // Check if it's the first occurrence
        if (mid == low || array[mid - 1] != value) {
            return mid;
        } else {
            return advanced_binary_recursive(array, low, mid - 1, value); // Search in the left half
        }
    } else if (array[mid] < value) {
        return advanced_binary_recursive(array, mid + 1, high, value); // Search in the right half
    } else {
        return advanced_binary_recursive(array, low, mid - 1, value); // Search in the left half
    }
}

