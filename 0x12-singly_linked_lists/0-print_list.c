# include "lists.h"
/**
 * print_list - imprime todo los elementos del link-list
 * @h: argumento de la funcion contiene inf. de link-list
 * Return: retorna la suma de los elementos
 *
 */
size_t print_list(const list_t *h)
{
	size_t sum = 0;
	const list_t *node = h;

	while (node != NULL)
	{
		if (node->str == NULL)
		{
			printf("[0](nill)\n");
		}
		else
		{
			printf("[%u] %s\n", (*node).len, (*node).str);
		}
		node = node->next;
		sum++;
	}
	return (sum);
}
