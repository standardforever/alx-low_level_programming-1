#include "main.h"

/**
 * _abs - the function return the absolute value of the argument
 * @n: the argument of the function
 * Return: the absolute value
 */
int _abs(int n)
{
	abso(n);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);
	return (0);
}
