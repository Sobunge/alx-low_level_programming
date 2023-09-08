#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
