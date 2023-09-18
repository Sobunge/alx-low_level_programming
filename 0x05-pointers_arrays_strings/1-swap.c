#include "main.h"

/**
   * swap_int - swapping variables
   * @a: pointer 1
   * @b: pointer 2
*/
void swap_int(int *a, int *b)
{
	/* Check if the pointers are not NULL (to avoid dereferencing null pointers) */
	if (a != NULL && b != NULL)
	{
		/* Use a temporary variable to hold the value of one integer */
		int temp = *a;
		/* Assign the value of the second integer to the first integer */
		*a = *b;
		/* Assign the value held in the temporary variable to the second integer */
		*b = temp;
	}
}
