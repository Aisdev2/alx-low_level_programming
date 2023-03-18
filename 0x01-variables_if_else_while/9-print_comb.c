/*
 * Adding header file
 * All code in main()
 * Looping from 0 to 9 with comma and space
 * return 0
 */

/*
 * PSEUDOCODE
 * set variabile to 0
 * loop through the variable till it get to 9 and terminate
 * print iteration with putchar
 * if variable is less than 8
 * putchar comma
 * putchar space
 * add a newline with putchar
 * return 0
 */

/**
 * main - print numbers from 0 to 9 with comma and space using puchar
 *
 * Return: 0
 */

#include <stdio.h>

int main(void)
{
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)
	{
		putchar(numbers + '0');

		if (numbers < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
