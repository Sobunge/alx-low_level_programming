#include "main.h"
#include <stdio.h>

/* Prototype: int _islower(int c) */
/* Returns 1 if c is lowercase */
/* Returns 0 otherwise */
int _islower(int c)
{
	/* Check if c is in the range of lowercase ASCII values */
	if (c >= 'a' && c <= 'z')
	{
		return 1;
	}else
	{
		return 0;
	}
}
