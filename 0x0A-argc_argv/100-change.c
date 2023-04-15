#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints change for an amount of money.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: 1 if not exactly 1 and 0 if it 1.
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int cents;

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	int coin;

	coin = 0;

	coin += cents / 25;
	cents %= 25;
	coin += cents / 10;
	cents %= 10;
	coin += cents / 5;
	cents %= 5;
	coin += cents / 2;
	cents %= 2;
	coin += cents / 1;
	cents %= 1;

	printf("%d\n", coin);

	return (0);
}
