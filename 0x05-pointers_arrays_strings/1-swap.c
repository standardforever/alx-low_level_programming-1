#include "main.h"

/**
 * swap_int - it swaps the value of the two integers
 * @a: takes in the address of an int
 * @b: takes in the address of an int
 * Return: it of type void(has no return value)
 */
void swap_int(int *a, int *b)
{
	int d = *a;
	int c  = *b;

	*a = c;
	*b = d;
}
