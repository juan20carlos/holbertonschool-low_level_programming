#include "main.h"
/**
 * clear_bit - cambia el bit 0 a 1
 *
 * @n: pointer
 * @index: indice
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int numero;

	if (index > (8 * u sizeof(unsigned long int)))
	{
		return (-1);
	}
	numero = ~(1 << index);
	*n = *n & numero;
	return (1);
}
