#include "main.h"

/**
 * _strcat - concatenates two string dest and src
 *
 * @dest: first string
 *
 * @src: second string
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	/* find the end of the destination string */
	while (*ptr != '\0')
	{
		ptr++;
	}

	/* Append the src to the end of the destination string */
	while (*src != '\0')
	{
		*ptr++ = *src++;
	}

	/* Add a terminating nupp byte to the end of the string */
	*ptr = '\0';

	/* return a pointer to the concatenated string */
	return (dest);
}
