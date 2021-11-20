#include "main.h"
/**
 * set_bit - cambia el bit
 *
 * @n: puntero apunta a numero
 * @index: indice de bit
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int numero;

	if (index > (sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	numero = 1 << index;
	*n = *n | numero;
	return (1);
}
