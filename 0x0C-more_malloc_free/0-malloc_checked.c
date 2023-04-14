#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc.
 *
 * @b: an unsigned integer.
 *
 * Return: a pointer to memory.
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *val;

	val = malloc(sizeof(*val) * b);

	if (val == NULL)
	{
		exit(98);
	}

	return (val);
}
