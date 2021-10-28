#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 *
 * @s1: pointer
 * @s2: pointer
 * Return: NULL
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;
	char *p;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	k = i + j + 1;
	p = malloc(k * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (l = 0; l < i; l++)
		p[l] = s1[l];
	for (l = 0; l < j; l++)
		p[l + i] = s2[l];
	p[i + j] = '\0';
	return (p);
}
