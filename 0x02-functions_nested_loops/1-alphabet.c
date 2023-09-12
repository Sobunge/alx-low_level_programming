#include "main.h"

/**
 * main - Entry point
 * Description: Use the print_alphabet to print from a to z
 * Return: void (Success)
 *
 * struct print_alphabet - Prints the lowercase alphabet followed by a newline.
 *
 * Description: This function prints the lowercase alphabet from 'a' to 'z'
 * followed by a newline character '\n'. It uses the putchar function from
 * the standard library to print each character.
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
