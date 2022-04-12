#include <unistd.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and err no is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _islower_lower - write the lower case latter to the stdout
 * Return: return 0
 */

int _islower_case(int c)
{
	return (islower(c));
}

/**
 * _isalpha_case - write the alphabetic character
 * Return: it returns 0
 */
int _isalpha_case(int a)
{
	return (isalpha(a));
}

/**
 * print - write to stdout
 * Return: 0
 */

char print(char b)
{
	return (printf("%c", b));
}

int abso(int d)
{
	return (abs(d));
}

int pri(int f)
{
	return (printf("%d", f));
}
