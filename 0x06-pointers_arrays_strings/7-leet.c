#include "main.h"

/**
 * leet - function that encode a string into 1337
 * @c: of type char
 * Return: returns the encoded string
 */
char *leet(char *ch)
{
	int j, i;
	char c[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	i = 0;
	while (ch[i] != '\0')
	{
		j = 0;
		while (c[j] != '\0')
		{
			if (ch[i] == c[j])
				ch[i] = n[j];
			j++;
		}
		i++;
	}
	return (ch);
}
