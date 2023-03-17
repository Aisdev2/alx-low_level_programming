#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
 * main - writing an if statement checking for the last digit
 *
 * Return: 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n, p;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* An if statement checking for the last digit */
	p = n % 10;
		if (p > 5)
		{
			printf("Last digit of %d is %d and is geeater than 5\n", n, p);
		} else if (p < 6 && p != 0)
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, p);
		} else
		{
			printf("Last digit of %d is %d and is zero\n", n, p);
		};
	return (0);
}
