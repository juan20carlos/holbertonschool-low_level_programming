#include "main.h"
/**
 * _strcpy - Copies string pointed to by src
 *
 * @dest: pointer
 * @src: pointer
 *
 *  Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i = i + 1;
	}
	*(dest + i) = '\0';
	return (dest);
}
