#include "main.h"

/**
 *jack_bauer - of type void
 * Return: don't have a return type
 */
void jack_bauer(void)
{
	int a,b,c,d;

	for (a = 48; a <= 50; a++)
		for (b = 48; b <=57; b++)
			for (c = 48; c <= 53; c++)
				for (d = 48; d <= 57; d++)
				{
					if (a != 48 && b != 51)
						break;
				       	_putchar(a);
			       		_putchar(b);
		       			_putchar(':');
	       				_putchar(c);
       					_putchar(d);
	       				_putchar('\n');
				}
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	jack_bauer();
	return (0);
}
