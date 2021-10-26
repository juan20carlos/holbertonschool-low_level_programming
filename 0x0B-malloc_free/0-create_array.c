#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size arrays
 * @c: varible type char
 *
 *  Return: always NULL or srt
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *srt;

	if (srt  == 0)
	{
		return (NULL);
	}
	srt = malloc(sizeof(char) * size);
	if (srt == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		srt[i] = c;
	}
	return (srt);
}
