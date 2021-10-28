#include "main.h"
#include<stdlib.h>
/**
 * string_nconcat -  concatenates two strings.
 * @s1: pointer
 * @s2: pointer
 * @n: variable
 * Return: always pointer or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j, l;

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
	if (j >= n)
		j = n;
	p = malloc((i + j + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (l = 0; l < i; l++)
		p[l] = s1[l];
	for (l = 0; l < j; l++)
		p[l + i] = s2[l];
	p[i + j] = '\0';
	return (p);
}
