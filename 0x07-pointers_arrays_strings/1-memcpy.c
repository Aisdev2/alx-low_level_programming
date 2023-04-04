#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: a char type that will take the value of SRC
 * @src: a char type with the value to be copied
 * @n: number of byte
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	/* set avariable to hold the number of byte with similar data type */
	unsigned int i;

	/* iterate through the source memory area */
	for (i = 0; i < n; i++)
	{
		/* copy the src memory area to the destination memory area */
		dest[i] = src[i];
	}

	return (dest);
}
