#include <stdio.h>
/**
 * main - Entry point
 * Description: Use thr puts function to print the string and add a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long prev = 1; /* First Fibonacci number */
	long current = 2; /* Second Fibonacci number */
	long next;
	long sum = 0;

	while (current <= 4000000)
	{
		if (current % 2 == 0)
		{
			sum += current; /* Add even Fibonacci to the sum */
		}
	/* Calculate the next Fibonacci number */
	next = prev + current;
	prev = current;
	current = next;
	}
	printf("%ld\n", sum);
	return (0); }
