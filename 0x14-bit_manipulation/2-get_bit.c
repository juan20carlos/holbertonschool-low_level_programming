#include"main.h"
/**
 * get_bit - muestra el bit del index
 *
 * @n: numero
 * @index: indice del binario
 * Return: retorna el resultado
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int result;

	if (index > (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	result = ((n >> index) & 1);
	return (result);
}
