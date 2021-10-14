#include "main.h"
#include <stdio.h>
/**
 * print_array - print elements of an arrays
 *
 * @a: Pointer
 * @n: variable
 *
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d",  a[i]);
		if (i < (n - 1))
		{
			printf(", ");
		}
		i = i + 1;
	}
	putchar('\n');
}
