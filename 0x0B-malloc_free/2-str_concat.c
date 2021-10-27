#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 *
 * @s1: pointer
 * @s2: pointer
 * Return: NULL
 *
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	char *p;

	if (s1 == NULL)
	{
		i = 0;
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			;
		}
	}
	if (s2 == NULL)
	{
		j = 0;
	}
	else
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			;
		}
	}
	p = malloc((i + j + 1) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
		p[i + j] = s2[j];
	p[i + j] = '\0';
	return (p);
}
