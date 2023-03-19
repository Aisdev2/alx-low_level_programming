/*
 * Add header file
 * print text without using print(3) and puts(3) function in the linux manual
 * return 1
 */

/*
 * using write() to print value
 * SYNTAX
 * write(decriptor, string, length of string)
 */

/**
 * main - print a string using write()
 *
 * Return: 1
 */
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, str, 59);

	return (1);
}
