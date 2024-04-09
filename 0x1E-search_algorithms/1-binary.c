#include <stdio.h>

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index where the value is located,
 * or -1 if not found or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	int left;
	int right;
	int mid;
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= (size_t)right; i++)
		{
			printf("%d", array[i]);
			if (i < (size_t)right)
			{
				printf(", ");
			}
		}
		printf("\n");

		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
