#include "main.h"

/** _strncat - function that concatenate two strings
 * @dest: concatenate src to dest
 * @src: concatenate to dest
 * n: the number of string in src to be concatenate to dest
 * Return: Return a pointer to the resulting dest
 */
char _strncat(char *dest, char *src, int n)
{
	int length, i;

	length = 0;
	while (dest[length] != '\0')
		length++;
	for (i = 0; i <= n; i++, length++)
		dest[length] = src[1];
	return (dest);
}
