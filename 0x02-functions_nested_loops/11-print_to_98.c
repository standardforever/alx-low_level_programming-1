#include "main.h"

/**
 * print_to_98 - void function
 * @n: argument
 * Return: No return type
 */
void print_to_98(int n)
{
	for (n; n < 99; n++)
	{
		pri(n);
		_putchar(',');
		_putchar(' ');
	}
	for (n; n > 99; n--)
	{
		pri(n);
		_putchar(',');
		_putchar(' ');
	}
	putchar('\n');
}

/**
 * main - check code
 * Return: Always 0
 */
int main(void)
{
	print_to_98(0);
//	print_to_98(98);
//	print_to_98(111);
//	print_to_98(81);
//	print_to_98(-10);
	return (0);
}
