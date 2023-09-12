#include <stdio.h>
#include "main.h"

/**
  * print_last_digit - Prints the last digit of a number
  * @n: The number to be treated
  *
  * Return: Value of the last digit of number
  */
int print_last_digit(int n)
{
	int last_digit = n % 10; /* Calculate the last digit */

	/* Ensure the last_digit is positive */
	if (last_digit < 0)
	{
		last_digit = last_digit * -1; 
	}
	_putchar(last_digit); /* Print the last digit */
	return (last_digit + '0');
}
