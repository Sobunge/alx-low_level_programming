#include <stdio.h>

int binary_search(int *array, int low, int high, int value);

int exponential_search(int *array, size_t size, int value) {
    if (array == NULL || size == 0) {
        return -1;
    }

    if (array[0] == value) {
        return 0;  // Value found at the first index
    }

    int i = 1;
    while (i < (int)size && array[i] <= value) {
        printf("Value checked array[%d] = [%d]\n", i, array[i]);
        i *= 2;
    }

    int low = i / 2;  // Starting point for binary search
    int high = (i < (int)size) ? i : size - 1;

    printf("Value found between indexes [%d] and [%d]\n", low, high);

    return binary_search(array, low, high, value);
}

int binary_search(int *array, int low, int high, int value) {
    while (low <= high) {
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
            return mid;  // Value found
        } else if (array[mid] < value) {
            low = mid + 1;  // Search in the right half
        } else {
            high = mid - 1;  // Search in the left half
        }
    }

    return -1;  // Value not found
}

