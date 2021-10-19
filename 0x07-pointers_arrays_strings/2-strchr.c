#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 *
 * @s: pointer
 * @c: variable
 * Return: NULL
 *
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (*(s + i))
	{
		if (*(s + i) == c)
		{
			while (*(s + i))
			{
				return (s + i);
				 i = i + 1;
			}
		}
		i = i + 1;
	}
	return (NULL);
}
