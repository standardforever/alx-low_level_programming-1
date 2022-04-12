#include <stdio.h>

/**
 * print_alphabet_x10 - print lower case alphabet 10 times
 * Return: no return type(void)
 */
char print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
		}
		putchar('\n');
	}
}

/**
 * main - call the function print_alphabet_x10
 * Return: return 0
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}
