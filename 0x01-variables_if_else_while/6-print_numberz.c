#include <stdio.h>
/**
 * main - Entry point
 * Description: Use thr puts function to print the string and add a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Print single-digit numbers from 0 to 9 using 'putchar' */
	int zero = '0'; /* Initialize with the character '0' */
	int nine = '9'; /* Initialize with the character '9' */
	int i;

	for (i = zero; i <= nine; i++)
	{
		putchar(i);
	}
	putchar('\n'); /* Print a newline character */
	return (0); }
