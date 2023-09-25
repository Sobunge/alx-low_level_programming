#include <stddef.h>

/**
 *_strchr -  concatenates two strings
 *@s: A pointer to an char that will be updated
 *@c: A pointer to an char that will be updated
 *Return: Null
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
