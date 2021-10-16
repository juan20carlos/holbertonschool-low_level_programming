#include "main.h"
/**
 * _strcmp - compares two strings
 *
 * @s1: pointer
 * @s2: pointer
 * Return: ASII
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((*(s1 + i) && *(s2 + i)) && (*(s1 + i) == *(s2 + i)))
	{
		i = i + 1;
	}

	return (*(s1 + i) - *(s2 + i));
}
