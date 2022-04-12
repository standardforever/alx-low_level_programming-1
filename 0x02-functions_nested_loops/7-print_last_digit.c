#include "main.h"

/**
 * print_last_digit - print the last digit of the input
 * @n: argument
 * Return: return the last digit
 */
int print_last_digit(int n)
{
	n = abso(n);
	int y = n % 10;
	pri(y);
}

/**
 * main - check the code
 *
 * Return: always 0.
 */
int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
