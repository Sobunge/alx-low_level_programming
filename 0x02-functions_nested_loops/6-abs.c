#include <stdio.h>
#include "main.h"

/**
  * _abs - Computes the absolute value of an integer.
  * @n: The number to be computed.
  *
  * Return: Absolute value of number or zero
  */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n); /* Return the negative number to make it positive */
	} else
	{
		return (n);  /* If n is already positive or zero, return it as is */
	}
}
