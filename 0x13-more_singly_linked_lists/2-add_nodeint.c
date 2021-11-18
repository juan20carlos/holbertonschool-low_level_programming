#include "lists.h"
/**
 * add_nodeint - agrega un nodo al inicio
 *
 * @head: puntero doble a la estructura
 * @n: datos
 * Return: retorna la direccion
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nuevo;

	nuevo = malloc(sizeof(listint_t));
	(*nuevo).n = n;
	(*nuevo).next = NULL;
	if (nuevo == NULL)
	{
		return (NULL);
	}
	(*nuevo).next = *head;
	*head = nuevo;
	return (*head);
}
