#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* Check if 'n' is positive, negative, or zero, and print the result */
	if (n > 0) {
        	printf("%d is positive.\n", n);
    	} else if (n < 0) {
        	printf("%d is negative.\n", n);
   	} else {
        	printf("%d is zero.\n", n);
    	}
	return (0);
}
