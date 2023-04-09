#include "main.h"

/**
 * factorial - a funcion that return the factorial of a number.
 *
 * @n: a given number.
 *
 * Return: factorial of n.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}