#include "main.h"

/**
 * function -Print alphabet
 * Description: Use thr puts function to print the string and add a new line
 * Return: void
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
