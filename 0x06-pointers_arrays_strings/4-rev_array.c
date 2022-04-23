#include "main.h"

/**
 * reverse_array - it reverse the content of an array
 * @a: is the array
 * @n: the number of element in the array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	n = n - 1;
	int i;
	int temp;

	i = 0;

	while (i < n)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
		n--;
	}
}
