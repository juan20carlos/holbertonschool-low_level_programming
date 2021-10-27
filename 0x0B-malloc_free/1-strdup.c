#include "main.h"
#include <stdlib.h>
/**
 * _strdup - copy of the string
 *
 * @str: array
 * Return: always NULL
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int i;
	unsigned int j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	i++;
	p = malloc(i * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		p[j] = str[j];
	}
	return (p);
}
