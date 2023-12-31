#include "main.h"
#include <stddef.h>

/**
   * swap_int - swapping variables
   * @a: pointer 1
   * @b: pointer 2
*/
void swap_int(int *a, int *b)
{
	/* Check if the pointers are not NULL */
	if (a != NULL && b != NULL)
	{
		/* Use a temporary variable to hold the value of one integer */
		int temp = *a;
		/* Assign the value of the second integer to the first integer */
		*a = *b;
		/* Assign the value held in the temporary variable*/
		*b = temp;
	}
}
