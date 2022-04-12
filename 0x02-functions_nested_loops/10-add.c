#include "main.h"
/**
 * add - add two integers
 * @x: first parameter
 * @y: second parameters
 * Return: return the sum
 */
int add(int x, int y)
{
	int z = x + y;

	return (z);
}

/**
 * main - check the code
 * Return: Always 0
 */
int main(void)
{
	int n;

	n = add(89, 9);
	printf("%d\n", n);
	return (0);
}
