#include "main.h"

/**
 * string_toupper - convert lower case to upper
 * @c: char
 * Return: upper case
 */
char *string_toupper(char *c)
{
	int i;

	i = 0;
	while (i >= 0 && c[i] != '\0')
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] = c[i] - 32;
		}
		i++;
	}
	return (c);
}
