/*
 * Add hwader file
 * All code in main()
 * using nested loop
 * return 0
 */

/**
 * main - print all possible combination of two two digit
 *
 * Return: 0;
 */

#include <stdio.h>

int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = i; j < 100; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');

			putchar(' ');

			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			if (i != 99 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
