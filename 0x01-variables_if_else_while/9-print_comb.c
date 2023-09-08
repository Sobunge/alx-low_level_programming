#include <stdio.h>
/**
 * main - Entry point
 * Description: Use thr puts function to print the string and add a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Print all possible combinations of single-digit numbers */
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i < j)
			{
				putchar(i + '0');
				putchar(',');
				putchar(' ');
				putchar(j + '0' + '\n');
			}
		}
	}
	return (0); }
