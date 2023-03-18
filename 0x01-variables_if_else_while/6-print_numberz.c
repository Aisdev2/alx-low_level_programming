/*
 * Adding heder file <stdio.h>
 * All code in main()
 * using loop to iteral from 0 to 10
 * return 0
 */

/*
 * PSEUDOCODE
 * set variable to 0
 * for loop 0 less than 10
 * stop the check
 * print the loop value using putchar
 */

/**
 * main - print value from 0 to 9 using the putchar function
 *
 * Return: 0
 */

#include <stdio.h>

int main(void)
{
	int decimal;

	for (decimal = 0; decimal < 10; decimal++)
	{
		putchar(decimal + '0');
	}

	putchar('\n');

	return (0);
}
