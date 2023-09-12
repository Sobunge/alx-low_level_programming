#include <stdio.h>

int add(int a, int b) 
{
	int result = a + b;
	return result;
}

/**
 * main - Entry point
 * Description: Use thr puts function to print the string and add a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = add(89, 9);
	printf("%d\n", n);	
	return (0); }
