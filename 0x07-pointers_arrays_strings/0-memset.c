#include "main.h"
/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointer  arrays
 * @b: valor
 * @n : size
 * Return: always s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i = i + 1;
	}
	return (s);
}

