#include <stdio.h>

int _abs(int n) 
{
	if (n < 0)
	{	
		return -n; /* Return the negation of the negative number to make it positive */
	} else 
	{
		return n;  /* If n is already positive or zero, return it as is */
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

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);
	return (0); }
