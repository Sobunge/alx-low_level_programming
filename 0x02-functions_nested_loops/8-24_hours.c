#include <stdio.h>
#include "main.h"

/**
 * jack_bauer -  function that prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59.
 * Return: nothing.
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{ /* Hours range from 0 to 23 */
		for (minute = 0; minute < 60; minute++)
		{ /* Minutes range from 0 to 59 */
			printf("%02d:%02d\n", hour, minute); /* Print the time in HH:MM format */
		}
	}
}
