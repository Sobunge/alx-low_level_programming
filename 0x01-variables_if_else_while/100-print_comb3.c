#include <stdio.h>
/**
 * main - Entry point
 * Description: Use thr puts function to print the string and add a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j; /* Initializing i and j */
	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
		putchar(i + '0'); /* Print the first digit */
		putchar(j + '0'); /* Print the second digit */
			if (i != 8 || j != 9)
			{
				putchar(','); /* Print a comma */
				putchar(' '); /* Print a space */
			}
		}
	}
	putchar('\n'); /* Print a newline character */
	return (0); }
