#include "main.h"

/**
 * swap_int - swap two integer value
 * @a: first integer
 * @b: second integer
 */

void swap_int(int *a, int *b)
{
	int p;

	p = *a;

	*a = *b;

	*b = p;
}
