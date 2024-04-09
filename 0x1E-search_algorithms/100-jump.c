#include <stdio.h>
#include <math.h>

int jump_search(int *array, size_t size, int value) {
    if (array == NULL) {
        return -1;
    }

    int jump_step = (int)sqrt(size);
    int prev = 0;
    int curr = jump_step;

    printf("Value checked array[0] = [%d]\n", array[prev]);

    while (curr < (int)size && array[curr] < value) {
        printf("Value checked array[%d] = [%d]\n", curr, array[curr]);
        prev = curr;
        curr += jump_step;
    }

    printf("Value found between indexes [%d] and [%d]\n", prev, curr);

    for (int i = prev; i < (int)size && i <= curr; i++) {
        printf("Value checked array[%d] = [%d]\n", i, array[i]);
        if (array[i] == value) {
            return i;  // Value found
        }
    }

    return -1;  // Value not found
}

