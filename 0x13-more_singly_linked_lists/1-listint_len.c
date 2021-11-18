#include "lists.h"
/**
 * listint_len - imprime nuemro de elementos
 *
 * @h: puntero a la estructura
 * Return: cont
 */
size_t listint_len(const listint_t *h)
{
	size_t cont;

	cont = 0;
	while (h != NULL)
	{
		h = (*h).next;
		cont++;
	}
	return (cont);
}
