#include <stdio.h>
#include <ctype.h>

/**
 * _islower - return 1 if c is lower and return 0 if otherwise
 *@c: the argument of _islower is of type integer
 *
 *Return: 0
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}

/**
 * main - call the function _islower()
 *Return: return 0
 */
int main(void)
{
	int r;

	r = _islower('H');
	putchar(r + '0');
	r = _islower('o');
	putchar(r + '0');
	r = _islower(108);
	putchar(r + '0');
	putchar('\n');
	return (0);
}
