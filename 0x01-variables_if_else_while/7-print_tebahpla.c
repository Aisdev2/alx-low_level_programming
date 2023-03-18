/*
 * Adding heder file <stdio.h>
 * All code in main()
 * using loop to iterate alphabet reversely
 * return 0
 */

/*
 * PSEUDOCODE
 * set variable to 'a'
 * for loop 'a' less than 'z'
 * stop the check
 * print the loop value using putchar
 */

/**
 * main - print letter 'a' to 'z' in reverse
 *
 * Return: letters in reverse
 */

#include <stdio.h>

int main(void)
{
	char reverseLetters;

	for (reverseLetters = 'z'; reverseLetters >= 'a'; reverseLetters--)
	{
		putchar(reverseLetters);
	}

	putchar('\n');

	return (0);
}
