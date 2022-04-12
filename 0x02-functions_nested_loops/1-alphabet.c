#include "main.h"

/**
 * print_alphabet - funtion that print aphabet in lowercase
 * Return: void
 */
char print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z' ; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

/**
 * main - where the function print_alphabet is call
 * Return: 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}
