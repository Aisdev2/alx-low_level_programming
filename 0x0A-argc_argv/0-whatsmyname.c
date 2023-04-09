#include <stdio.h>

/**
 * main - a program that print its name.
 * @argc: variable count.
 * @argv: point to string.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	if (argc)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
