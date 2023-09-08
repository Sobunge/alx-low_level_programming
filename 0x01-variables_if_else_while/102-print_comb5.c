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
				putchar(j / 10 + 48);
				putchar(j % 10 + 48);
				putchar(',');
				putchar(' ');
				putchar(i / 10 + 48);
				putchar(i % 10 + 48);

				if (i != 99 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}

	}
	return (0); }
