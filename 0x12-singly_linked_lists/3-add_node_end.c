#include "lists.h"
/**
 * contarstring - cuenta la cantidad de caracteres
 * @p: puntero a string
 * Return: retorna la longitud de la cadena
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
 * add_node_end - agrega un nodo al final
 * @head: puntero doble a la estructura
 * @str: puntero al string
 * Return: NULL or la direccion de un nodo
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = NULL;
	list_t *temp = NULL;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}
	(*temp).str = strdup(str);
	(*temp).next = NULL;
	(*temp).len = contarstring(str);

	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		ptr = *head;
		while ((*ptr).next != NULL)
		{
			ptr = (*ptr).next;
		}
		(*ptr).next = temp;
	}
	return (*head);
}
