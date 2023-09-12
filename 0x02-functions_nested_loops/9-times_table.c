#include <stdio.h>

/**
 * times_table - function that prints the 9 times table, starting with 0
 *
 * Return: nothing.
 */
void times_table(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		printf("9 x %d = %d\n", i, 9 * i);
	}
}
