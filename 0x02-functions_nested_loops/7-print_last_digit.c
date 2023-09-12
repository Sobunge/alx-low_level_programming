#include <stdio.h>

int print_last_digit(int n)
{
	int last_digit = n % 10; /* Calculate the last digit */

	/* Ensure the last_digit is positive */
	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}
	printf("%d", last_digit); /* Print the last digit */
	return last_digit;
}

/**
 * main - Entry point
 * Description: Use thr puts function to print the string and add a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');	
	return (0); }
