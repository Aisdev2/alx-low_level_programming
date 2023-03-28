#include "main.h"

/**
 * _strlen - return the lenght of pointer variable s
 * @s: variable wit string
 * Return: strlen
 */

int _strlen(char *s)
{
	int a;

	a = 0;

	while (*s++)
	{
		a++;
	}

	return (a);
}
