#include <stddef.h>
#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *original_dest = dest;/*Save the original dest pointer*/

	while (n > 0)
	{
		*dest = *src;/* Copy a byte from src to dest */
		dest++;/* Move to the next destination byte */
		src++;/* Move to the next source byte */
		n--;/* Decrease the remaining count */
	}

	return (original_dest);/* Return the original destination pointer */
}
