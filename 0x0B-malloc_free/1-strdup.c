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
	int i;
	int j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		i = i + 1;
	}
	p = malloc(i * sizeof(str));
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
