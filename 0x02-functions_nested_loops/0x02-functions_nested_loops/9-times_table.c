#include <stdio.h>

void times_table(void)
{
	for (int i = 0; i <= 10; i++)
	{
		printf("9 x %d = %d\n", i, 9 * i);
	}
}

/**
 * main - Entry point
 * Description: Use thr puts function to print the string and add a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	times_table();
	return (0); }
