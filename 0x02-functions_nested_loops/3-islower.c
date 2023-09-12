#include "main.h"
#include <stdio.h>

/**
  * _islower - Checks for lowercase character
  * @c: The character to be checked
  *
  * Return: 1 for lowercase character or 0 for anything else
  */
int _islower(int c)
{
	/* Check if c is in the range of lowercase ASCII values */
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
