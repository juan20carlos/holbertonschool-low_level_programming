#include "main.h"
/**
 * _strncpy - function that copies a string
 *
 * @dest: pointer
 * @src: pointer
 * @n: n bytes
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		 i = i + 1;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i = i + 1;
	}
	return (dest);
}
