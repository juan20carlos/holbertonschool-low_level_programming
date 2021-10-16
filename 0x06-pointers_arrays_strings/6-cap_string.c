#include "main.h"
/**
 * cap_string - capitalizes all words
 *
 * @p: pointer
 * Return: p
 *
 */
char *cap_string(char *p)
{
	int i;
	int j;
	char c[] = {44, 59, 46, 33, 63, 34, 40, 41, 123, 125, 32, 10, 9};

	i = 0;
	while (p[i] != '\0')
	{
		if (i == 0 && p[i] >= 97 && p[i] <= 122)
		{
			p[i] = p[i] - 32;
		}
		j = 0;
		while (c[j] != '\0')
		{
			if (c[j] == p[i] && (p[i + 1] >= 97 && p[i + 1] <= 122))
			{
				p[i + 1] = p[i + 1] - 32;
			}
			j = j + 1;
		}
		i = i + 1;
	}
	return (p);
}

