#include "main.h"
#include <stdlib.h>
/**
 * _strstr - Write a function that locates a substring.
 * @haystack: pointer
 * @needle: pointer
 * Return: Null / needle + j
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	i = 0;
	while (*(haystack + i))
	{
		if (*(haystack + i) != '\0')
		{
			j = 0;
			while (*(haystack + i) == *(needle + j))
			{
				return (needle + j);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
