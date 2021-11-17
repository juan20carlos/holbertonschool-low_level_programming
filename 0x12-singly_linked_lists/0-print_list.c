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

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("%s\n", "[0] (nill)");
		}
		else
		{
			printf("[%u] %s\n", (*h).len, (*h).str);
		}
		h = h->next;
		sum++;
	}
	return (sum);
}
