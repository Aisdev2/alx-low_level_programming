#include "main.h"

/**
 * _strcmp - function that compare two string
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: the compared value
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
		i++;
	}

	return (s1[i] - s2[i]);
}
