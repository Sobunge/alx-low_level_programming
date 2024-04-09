#include <stdio.h>
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 *               using the Jump search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index where the value is located,
 *         or -1 if not found or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
    if (array == NULL)
    {
        return -1;
    }

    int jump_step = (int)sqrt(size);
    int prev = 0;
    int curr = jump_step;

    printf("Value checked array[0] = [%d]\n", array[prev]);

    while (curr < (int)size && array[curr] < value)
    {
        printf("Value checked array[%d] = [%d]\n", curr, array[curr]);
        prev = curr;
        curr += jump_step;
    }

    printf("Value found between indexes [%d] and [%d]\n", prev, curr);

    for (int i = prev; i < (int)size && i <= curr; i++)
    {
        printf("Value checked array[%d] = [%d]\n", i, array[i]);
        if (array[i] == value)
        {
            return i;  /* Value found */
        }
    }

    return -1;  /* Value not found */
}
