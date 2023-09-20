#include <stdio.h>
#include "main.h"
/**
*_strcat - function that concatenates two strings.
*@dest: pointer to destination string.
*@src: pointer to source string.
*
*Return: pointer to destination string.
 */

char *_strcat(char *dest, const char *src)
{
	char *result = dest;/*Store the start address of dest */

	/* Move the dest pointer to the end of the string */
	while (*dest != '\0')
	{
		dest++;
	}

	/* Append characters from src to dest */
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	/* Add a null terminator to the end of the concatenated string */
	*dest = '\0';

	return result; /* Return the start address of dest */ }
