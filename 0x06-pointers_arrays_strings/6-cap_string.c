#include "main.h"
#include <stdio.h>

/**
 * cap_string - it capitalize all word of a string
 * @c: parameter of char
 * Return: the capitalize words
 */
char *cap_string(char *c)
{
	int i, j;
	char w[14] = {' ', '\n', '\t', ',', ';', '.', '!', '?', '"', '(', ')'};

	w[11] = '{';
	w[12] = '}';

	i = 0;
	while (c[i] != '\0')
	{
		if (i == 0 && (c[i] >= 'a' && c[i] <= 'z'))
			c[i] = c[i] - 32;
		j = 0;
		while (w[j] != '\0')
		{
			if (c[i] == w[j])
			{
				if (c[i + 1] >= 'a' && c[i + 1] <= 'z')
					c[i + 1] = c[i + 1] - 32;
				else
					c[i + 1] = c[i + 1];
			}
			j++;
		}
		i++;
	}
	return (c);
}
