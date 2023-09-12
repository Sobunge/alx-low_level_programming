#include <stdio.h>
/**
 * main - Entry point
 * Description: Use thr puts function to print the string and add a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int fib[50], i; /* Store Fibonacci numbers as long long integers to handle large values */
	fib[0] = 1;
	fib[1] = 2;

	for (i = 2; i < 50; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	for (i = 0; i < 50; i++)
	{
		printf("%d", fib[i]);
		if (i < 49)
		{
			printf(", ");
		}
	}
	printf("\n");	
	return (0); }
