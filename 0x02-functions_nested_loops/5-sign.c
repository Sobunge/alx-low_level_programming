#include <stdio.h>
#include "main.h"

/**
  * print_sign - Prints the sign of a number
  * @n: The number to be checked
  *
  * Return: 1 for positive num, -1 for negative num or zero for anything else
  */
int print_sign(int n)
{
	int sign;

	if (n > 0)
	{
		putchar('+');
		sign = 1;
	} else if (n == 0)
	{
		putchar('0');
		sign = 0;
	} else
	{
		putchar('-');
		sign = -1;
	}
	return sign;
}
