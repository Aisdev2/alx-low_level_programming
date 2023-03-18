/* Adding my header file */
#include <stdio.h>

/* Betty coding style and documentation */

/**
 * main - creating a loop that uses putchar to print lower case alphabet
 *
 * Return: lower case alphabet
 */

/* creating my MAIN function and  a variable using char data type */
int main(void)
{
	char lowerCase;

	/* creating my while loop for the alphabet */

	lowerCase = 'a';
	while (lowerCase <= 'z')
	{
		putchar(lowerCase);
		lowerCase++;
	}

	putchar('\n')
		;
	return (0);
}


