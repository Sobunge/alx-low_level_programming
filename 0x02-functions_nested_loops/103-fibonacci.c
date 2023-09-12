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
			sum += current; /* Add even Fibonacci number to the sum */
		}
	/* Calculate the next Fibonacci number */
	next = prev + current;
	prev = current;
	current = next;
	}
	printf("The sum of even-valued Fibonacci terms not exceeding 4,000,000 is: %ld\n", sum);
	return (0); }
