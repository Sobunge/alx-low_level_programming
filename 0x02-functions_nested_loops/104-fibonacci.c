#include <stdio.h>
/**
 * main - Entry point
 * Description: Use thr puts function to print the string and add a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int prev = 1; /* Initialize the previous Fibonacci number */
	int current = 2; /* Initialize the current Fibonacci number */
	int count = 2; /* Start the count at 2 */
	unsigned long int next, nxt;

	/* Print the first two Fibonacci numbers */
	printf("1, 2, ");
	while (count < 98)
	{
		/* Calculate the next Fibonacci number */
		next = prev + current;
		/* Print the next Fibonacci number with a comma and space */
		printf("%lu, ", next);
		/* Update variables for the next iteration */
		prev = current;
		current = next;
		count++;
	}
	/* Calculate and print the 98th Fibonacci number */
	nxt = prev + current;
	printf("%lu\n", nxt);
	return (0); }
