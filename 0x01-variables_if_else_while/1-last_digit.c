#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - execute the code
 * Return: it returns 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf("Last digit of n is %i and is greater than 5\n", n);
	else if (n == 0)
		printf("Last digit of n is %i and is 0\n", n);
	else if (n < 6 && n != 0)
		printf("Last digit of n is %i and is less than 6 and not 0", n);
	return (0);
}
