#include "main.h"
#include <stdio.h>

/**
 * _strncpy - the function copies string from src
 * @dest: the argument that the string is copied to
 * @src: the argument that the string is copied from
 * @n: the number of char that will be copied from src to dest
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	char c = dest;
	int i, j, k;
	printf("%s", c);

	for (i = 0; i <= (n-1); i++)
	{
		dest[i] = src[i];
	}
	for (j = 0; j >= 0 && j != '\0'; j++, i++)
	{
		dest[i] = c[j];
	}
	printf("%s", dest);
}
