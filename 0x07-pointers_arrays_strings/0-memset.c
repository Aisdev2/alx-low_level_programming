#include "main.h"

/**
* _memset - funtion that fills memmory with a contant byte
* @s: a pointer to the memory area
* @n: the first byte of the memory area
* @b: contant byte
* Return: s;
*/

char *_memset(char *s, char b, unsigned int n)
{
	/* set a variable equal to the first byte(n) */
	unsigned int i;

	/* using a loop to iterate over the memory area pointed to by s */
	for (i = 0; i < n; i++)
	{
		/* set each byte to the value of b */
		s[i] = b;
	}

	/* return the pointer value */
	return (s);
}
