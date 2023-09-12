#include <stdio.h>

void jack_bauer(void)
{
	for (int hour = 0; hour < 24; hour++)
	{ /* Hours range from 0 to 23 */
		for (int minute = 0; minute < 60; minute++)
		{ /* Minutes range from 0 to 59 */
			printf("%02d:%02d\n", hour, minute); /* Print the time in HH:MM format */
		}
	}
}

/**
 * main - Entry point
 * Description: Use thr puts function to print the string and add a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	jack_bauer();
	return (0); }
