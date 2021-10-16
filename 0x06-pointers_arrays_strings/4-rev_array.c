#include "main.h"
/**
 * reverse_array - reverses the content  of an array
 *
 * @a: pointer
 * @n: variable
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	i = 0;
	n = n  - 1;
	while (i < n)
	{
		t = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = t;
		i++;
		n--;
	}
}
