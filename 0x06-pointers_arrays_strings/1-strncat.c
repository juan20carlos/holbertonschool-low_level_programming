#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: pointer
 * @src: pointer
 * @n: variable
 * Return: Always dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (*(dest + i))
	{
		i = i + 1;
	}
	j = 0;
	while ((j < n) && (*(src + j)))
	{
		*(dest + i) = *(src + j);
		i = i + 1;
		j = j + 1;
	}
	if (j < n)
	{
		*(dest + i) = *(src + j);
	}
	return (dest);
}
