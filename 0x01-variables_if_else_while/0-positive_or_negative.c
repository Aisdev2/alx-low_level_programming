#include <stdlib.h>
#include <time.h>
/* including <stdio.h> header file */
#include <stdio.h>
/* betty style doc for function main goes there */

/**
 * main - writing a if statement that print positive or negative
 *
 * Return: positive or negative
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* An if statement checking if value of n is positive negative or zero */

	if (n > 0)
	{
		printf("%d is positve\n", n);
	} else if (n < 0)
	{
		printf("%d is negative\n", n);
	} else
	{
		printf("is zero\n");
	};
	return (0);
}
