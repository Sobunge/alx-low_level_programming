#include <stdio.h>
/**
 * main - Entry point
 * Description: Use thr puts function to print the string and add a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Print all possible combinations of single-digit numbers */
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0'); /* Print i in int */
		if (i < 9)
		{
			putchar(','); /* Print a comma */
			putchar(' '); /* Print a space */
		}
	}
	putchar('\n');
	return (0); }
