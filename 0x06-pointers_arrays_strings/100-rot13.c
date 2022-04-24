#include "main.h"

/**
 * rot13 - function that encode a string using rot13
 * @c: takes an arguement of ttype char
 * Return: the encoded string
 */
char *rot13(char *c)
{
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	i = 0;
	while (c[i] != '\0')
	{
		j = 0;
		while (a[j] != '\0')
		{
			if (c[i] == a[j])
			{
				c[j] = b[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (c);
}
