#include <stdio.h>
/**
 * main - Entry point
 * Description: Use thr puts function to print the string and add a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j, i;

	for (j = 0; j <= 99; j++)
	{
		for (i = j; i <= 99; i++)
		{
			if (i != j)
			{
				putchar((i / 10) + '0'); /* Print the first digit of the first number */
				putchar((i % 10) + '0'); /* Print the second digit of the first number */
				putchar(' '); /* Print a space */
				putchar((j / 10) + '0'); /* Print the first digit of the second number */
				putchar((j % 10) + '0'); /* Print the second digit of the second number */

				if (i != 99 || j != 99 )
				{
					putchar(',');
					putchar(' ');
				}
			}

		}

	}
	return (0); }
