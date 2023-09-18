#include "main.h"

/**
   * rev_string - Write a function that reverses a string
   *
   * @s: string var point
   *
*/
void rev_string(char *s)
{
	int length = 0, start = 0, end;
	char temp;

	if (s == NULL)
		return;
	length = 0;
	while (s[length] != '\0')
	{
		length++;/*Calculate the length of the string */
	}
	end = length - 1;
	while (start < end)
	{
		/* Swap characters at start and end */
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		/* Move towards the center of the string */
		start++;
		end--;
	}
}
