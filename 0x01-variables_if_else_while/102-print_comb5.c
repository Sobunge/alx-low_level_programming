#include <stdio.h>
/**
 * main - Entry point
 * Description: Use thr puts function to print the string and add a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j; /* Initialize i and j*/

	for (i = 0; i <= 99; i++)
	{
		for (j = i; j <= 99; j++)
		{
			putchar((i / 10) + '0'); /* Print the first digit of the first number */
			putchar((i % 10) + '0');  /* Print the second digit of the first number */
			putchar(' '); /* Print a space */
			putchar((j / 10) + '0'); /* Print the first digit of the second number */
			putchar((j % 10) + '0'); /* Print the second digit of the second number */
			if (i != 99 || j != 99)
			{
				putchar(','); /* Print a comma */
				putchar(' '); /* Print a space */
			}
		}
	}
	putchar('\n'); /* Print a newline character */
	return (0); }
