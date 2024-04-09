#include <stddef.h>

int binary_search(int *array, size_t size, int value) {
    if (array == NULL) {
        return -1;
    }

    int left = 0;
    int right = size - 1;
    int mid;

    while (left <= right) {
        printf("Searching in array: ");
        for (int i = left; i <= right; i++) {
            printf("%d", array[i]);
            if (i < right) {
                printf(", ");
            }
        }
        printf("\n");

        mid = left + (right - left) / 2;

        if (array[mid] == value) {
            return mid;  // Value found
        } else if (array[mid] < value) {
            left = mid + 1;  // Search in the right half
        } else {
            right = mid - 1;  // Search in the left half
        }
    }

    return -1;  // Value not found
}

