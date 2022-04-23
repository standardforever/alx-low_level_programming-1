#include "main.h"
char *cap_string(char *c)
{
	int i, j;
	char w[] = {44, 59, 46, 33, 63, 34, 40, 41, 123, 125, 32, 10, 9};

	i = 0;
	j = 0;
	while (c[i] != '\0')
	{
		j = 0;
		while(w[j] != '\0')
		{
			if (c[i] == w[j])
			{
				if (c[i + 1] >= 'a' && c[i +1] <= 'z')
				{
					c[i + 1] = c[i + 1 ] - 32;
				}
			}
			j++;
		}
		i++;
	}
	return (c);
}
