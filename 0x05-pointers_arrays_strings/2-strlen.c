#include "main.h"
/**
 * _strlen - returns the length of a string
 *
 * @s: pointer
 * Return: Always contador
 */
int _strlen(char *s)
{
	int contador = 0;

	while (*s != '\0')
	{
		contador = contador + 1;
		s = s + 1;
	}
	return (contador);
}
