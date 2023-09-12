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

/**
 * main - Entry point
 * Description: Use thr puts function to print the string and add a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0); }
