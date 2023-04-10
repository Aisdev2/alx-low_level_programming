#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a program that add up positive numbers.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0 if char  is absent but 1 if present.
 */

int main(int argc, char *argv[])
{
	int count;

	int sum;

	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}

	for (count = 1; count < argc; count++)
	{
		char *str;
		int strlen;

		str = argv[count];

		for (strlen = 0; str[strlen]; strlen++)
		{
			if (!isdigit(str[strlen]))
			{
				printf("Error\n");
				return (1);
			}
		}

		if (argc > 0)
		{
			sum += atoi(str);
		}
	}

	printf("%d\n", sum);

	return (0);
}
