#include "lists.h"
/**
 * print_listint - imprime  los elemento del nodo
 *
 * @h: es un puntero a la estructura
 * Return: retorna numero de elementos
 */
size_t print_listint(const listint_t *h)
{
	size_t contador;

	contador = 0;
	while (h != NULL)
	{
		printf("%d\n", (*h).n);
		h = (*h).next;
		contador++;
	}
	return (contador);
}
