#include "main.h"
#include <stdlib.h>
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
			j++;
		}
		i++;
	}
	return (NULL);
}
