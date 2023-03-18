/*
 * Adding my header file
 * using three putchar
 * one for digit
 * one for letters
 * one for newline
 * All code on main()
 * using two for loop for digit and for letters
 * return 0
 */

/*
 * PSEUDOCODE
 * set two variables for digit and letter
 * use for loop to check both variables
 * the first for loop (digit = 0  digit < 10 digit = digit + 1)
 * putchar digit
 * same with letter
 * for loop (letter = 'a' letter < 'g' letter = letter + 1)
 * putchar letter
 * putchar newline
 * return 0
 */

/**
 * main - print base 16 value 0 to 9 and 'a' to 'f' using putchar
 *
 * Return: base 16 value
 */

#include <stdio.h>

int main(void)
{
	char digit, letters;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}

	for (letters = 'a'; letters <= 'f'; letters++)
	{
		putchar(letters);
	}

	putchar('\n');

	return (0);
}
