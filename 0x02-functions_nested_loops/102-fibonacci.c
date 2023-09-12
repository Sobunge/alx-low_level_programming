#include <stdio.h>
/**
 * main - Entry point
 * Description: Use thr puts function to print the string and add a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long long int fib[50]; /* Store Fibonacci numbers as long long integers to handle large values */
	fib[0] = 1;
	fib[1] = 2;

	for (int i = 2; i < 50; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	for (int i = 0; i < 50; i++)
	{
		printf("%lld", fib[i]);
		if (i < 49)
		{
			printf(", ");
		}
	}
	printf("\n");	
	return (0); }
