#include <stdio.h>

/**
 * main - a program that print the number of argument passed.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	if (argv)
	{
		printf("%d\n", argc - 1);
	}

	return (0);
}
