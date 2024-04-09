#include <stdio.h>

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index where the value is located, or -1 if not found or array is NULL
 */
int binary_search(int *array, size_t size, int value) {
    if (array == NULL) {
        return -1;
    }

    int left = 0;
    int right = size - 1;
    int mid;
    size_t i;

    while (left <= right) {
        printf("Searching in array: ");
        for (i = left; i <= right; i++) {
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
