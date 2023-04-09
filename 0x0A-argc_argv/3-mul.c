#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that multiply two argument received
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 1 if no input return 0 if there is input
 */

int main(int argc, char *argv[])
{
	int count;
	int mul;

	mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	if (argc)
	{
		for (count = 1; count < argc; count++)
		{
			mul *= atoi(argv[count]);
		}

		printf("%d\n", mul);
	}

	return (0);
}
