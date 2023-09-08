#include <stdio.h>
/**
 * main - Entry point
 * Description: Use thr puts function to print the string and add a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k; /* Initilizing i, j and k */

	for (i = 0; i <= 7; i++)
	{
		for (j = i + 1; j <= 8; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				putchar(i + '0'); /* Print the first digit */
				putchar(j + '0'); /* Print the second digit */
				putchar(k + '0'); /* Print the third digit */
				if (i != 7 || j != 8 || k != 9)
				{
					putchar(','); /* Print a comma */
					putchar(' '); /* Print a space */
				}
			}
		}
	}
	putchar('\n'); /* Print a newline character */
	return (0); }
