#include "main.h"

/**
 * print_rev - it print a string in reverse
 * @s: char as an argument
 * Return: void function(it has no return type
 */
void print_rev(char *s)
{
	int i, j;

	for (i = 0; i >= 0; i++)
	{
		if (s[i] == s[-1])
			break;
	}
	for (j = i; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
