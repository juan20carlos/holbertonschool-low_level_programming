#include "main.h"
/**
 * _memcpy - copies memory area
 *
 * @dest: pointer arrays
 * @src: pointer arrays
 * @n: variable
 * Return: dest always
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i = i + 1;
	}
	return (dest);
}
