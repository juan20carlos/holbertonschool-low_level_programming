#include "lists.h"
/**
 * contarstring - cuenta los caracteres
 * @p: puntero que apunta al string
 * Return: i or 0
 */
int contarstring(const char *p)
{
	int i = 0;

	if (p == NULL)
	{
		return (0);
	}
	while (p[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * add_node - inseta un nodo al inicio
 * @head: puntero doble a la estructura
 * @str: puntero al string
 * Return: NULL or direccion de un nodo
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nuevo = NULL;

	nuevo = malloc(sizeof(list_t));
	if (nuevo == NULL)
	{
		return (NULL);
	}
	(*nuevo).str = strdup(str);
	(*nuevo).next = *head;
	(*nuevo).len = contarstring((*nuevo).str);
	*head = nuevo;
	return (*head);
}
