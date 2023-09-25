#include <stddef.h>
#include "main.h"

/**
 *_memset -  concatenates two strings
 *@s: A pointer to an char that will be updated
 *@b: A pointer to an char that will be updated
 *@n: value
 *Return: ptr
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;/* Save the original pointer to return it later */

	while (n > 0)
	{
		*s = b; /* Set the current byte to the constant byte */
		s++; /* Move to the next byte */
		n--; /* Decrease the remaining count */
	}

	return (ptr); /* Return the original pointer */
}
