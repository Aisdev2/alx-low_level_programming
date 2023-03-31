#include "main.h"

/**
 * reverse_array - function that reverses the content of an array
 *
 * @a: an integer array
 *
 * @n: number of element in the array to swap
 */

void reverse_array(int *a, int n)
{
	int i, j, tmp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
