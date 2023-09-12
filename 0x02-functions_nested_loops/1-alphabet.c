#include "main.h"

/**
 * main - Entry point
 * Description: Use the print_alphabet function to print the list of alphabet from a to z
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
