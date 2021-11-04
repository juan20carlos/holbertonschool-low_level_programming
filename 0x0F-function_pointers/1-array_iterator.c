#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - given as a parameter the array.
 *
 * @array: pointer address array
 * @size: toma valor positivos
 * @action: direccion de la funcion
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
