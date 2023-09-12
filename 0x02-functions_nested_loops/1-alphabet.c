#include "main.h"

/**
 * main - Entry point
 * Description: Use the print_alphabet to print from a to z
 * Return: void (Success)
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
