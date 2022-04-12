#include "main.h"

/**
 * print_sign - print the sign of the number
 * @n: the argument
 *
 * Return: return 0
 */
int print_sign(int n)
{
	if (n > 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if  (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
