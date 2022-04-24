#include "main.h"

/**
 * print_number - a function that print integer using putchar
 * @n: takes an integer
 * Return: nothing
 */
void print_number(int n)
{
	/*print '-' for negative number */
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	/* first remove the last digit of number and print  remaining digits */
	/*using recursion, then print the last digit*/
	if (n / 10)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}
