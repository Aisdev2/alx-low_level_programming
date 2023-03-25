#include <stdio.h>

/**
 * main - print from 1 - 100,  multiples of 3 fizz,5 buzz,both 3 & 5 fizz buzz
 *
 * Return:  0
 */

int main(void)
{
	int fizzBuzz;

	fizzBuzz = 1;

	while (fizzBuzz <= 100)
	{
		if (fizzBuzz % 3 == 0)
		{
			printf("Fizz");
		}
		else if (fizzBuzz % 5 == 0)
		{
			printf("Buzz");
		}
		else if (fizzBuzz % 3 == 0 && fizzBuzz % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", fizzBuzz);
		}
		printf(" ");
		fizzBuzz++;
	}

	return (0);
}
