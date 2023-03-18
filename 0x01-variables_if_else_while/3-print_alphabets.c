/* Adding my header file */
#include <stdio.h>

/* Betty coding style and documentation */

/**
 * main - create loop printing lower case alphabet and upper case using putchar
 *
 * Return: lower case alphabet
 */

/* creating my MAIN function and  a variable using char data type */
int main(void)
{
	char lowerCase, upperCase;

	/* creating my for loop for the alphabet */

	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
	{
		putchar(lowerCase);
	}

	for (upperCase = 'A'; upperCase <= 'Z'; upperCase++)
	{
		putchar(upperCase);
	}

	putchar('\n');

	return (0);
}
