#include "main.h"
#include <string.h>
/**
 * _strcat - concatenates two string
 *
 * @dest: pointer
 * @src: pointer
 * Return: dest
 *
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (*(dest +i))
	{
		i = i + 1;
	}
	j = 0;
	while((*(dest + i) = *(src + j)))
	{
		i = i + 1;
		j = j + 1;
	}
	return (dest);
}
