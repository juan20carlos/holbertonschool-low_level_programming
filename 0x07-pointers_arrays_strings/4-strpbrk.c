#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches a string for any of a set of bytes.
 *
 * @s: pointer
 * @accept: pointer
 * Return: always s+i
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	i = 0;
	while (*(s + i))
	{
		j = 0;
		while (*(accept + j))
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
			if (*(s + i) == ',')
			{
				*(s + i) = ',';
				return (s + i);
			}
			if (*(s + i) == ' ')
			{
				*(s + i) = ' ';
				return (s + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
