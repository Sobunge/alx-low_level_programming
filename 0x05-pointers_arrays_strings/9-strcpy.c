#include "main.h"
#include <stdio.h>

/**
  * _strcpy -  copies a string into a deztinated variable
  * @dest: destination char argument of characters
  * @src: source char argument of characters
  * Return: a string of character upon success
*/

char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest; /* Store the starting address of dest */

	/* Copy characters from src to dest */
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	/* Add the terminating null byte to dest */
	*dest = '\0';

	return (dest_start); /* Return the pointer to the beginning of dest */
}
