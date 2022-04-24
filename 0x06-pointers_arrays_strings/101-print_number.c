#include "main.h"

/**
 * print_number - a function that print integer using putchar
 * @n: takes an integer
 * Return: nothing
 */
void print_number(int n)
{
	unsigned int i = n;
	/*print '-' for negative number */
	if (n < 0)
	{
		_putchar('-');
		i = -i;
	}
	/* first remove the last digit of number and print  remaining digits */
	/*using recursion, then print the last digit*/
	if (i / 10)
		print_number(i / 10);
	_putchar(i % 10 + '0');
}
