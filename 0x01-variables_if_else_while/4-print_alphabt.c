/*
 * Introducing header file <stdio.h>
 * Making use of the betty style and docs
 * All my code on main
 * using putchar to print out value
 * using loop and if statement
 * return 0
 */

/* pseudo code */
/*
 * set char  variable to a
 * for loop to to print a to z
 * if statement inside loop that will chack for e and q and skip them
 * using continue in if statement to loop after skiping e and q
 * else putchar (variable name)
 * add a new line using putchar
 * return 0
 */

/**
 * main - print letters without 'q' and 'e' using putchar
 *
 * Return: letters without 'q' and 'e'
 */
#include <stdio.h>

int main(void)
{
	char skip_q_and_e;

	for (skip_q_and_e = 'a'; skip_q_and_e <= 'z'; skip_q_and_e++)
	{
		if (skip_q_and_e == 'q' || skip_q_and_e == 'e')
		{
			continue;
		} else
		{
			putchar(skip_q_and_e);
		}
	}

	putchar('\n');

	return (0);
}
