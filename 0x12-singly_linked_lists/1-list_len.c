#include "lists.h"
/**
 * list_len - numero de elementos de lista
 * @h: puntero que apunta a const list_t
 * Return: devuelve los números de elementos
 */
size_t list_len(const list_t *h)
{
	size_t cont = 0;

	while (h != NULL)
	{
		*h = h->next;
		cont++;
	}
	return (cont);
}
