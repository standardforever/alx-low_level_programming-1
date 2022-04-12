#include "main.h"

/**
 * _isalpha - it checks for letters, lowercase or uppercase
 *@c: argument of type integer
 *
 *Return: 0
 */
int _isalpha(int c)
{
	if (_isalpha_case(c))
		return (1);
	else
		return (0);
}

/**
 * main - check the code.
 *
 * Return: always 0.
 */
int main(void)
{
	int r;

	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('o');
	_putchar(r + '0');
	r = _isalpha(108);
	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
