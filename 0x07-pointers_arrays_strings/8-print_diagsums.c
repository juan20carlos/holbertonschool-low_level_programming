#include "main.h"
#include "stdio.h"
/**
 * print_diagsums -  sum of the two diagonals of a square matrix of integers.
 *
 * @a: pointer
 * @size: variable
 *
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sumx;
	int sumy;

	i = 0;
	sumx = 0;
	sumy = 0;
	for (i = 0; i < (size * size); i += size + 1)
	{
		sumx += a[i];
	}
	for (i = size - 1; i < (size * size - 1); i += size - 1)
	{
		sumy += a[i];
	}
	printf("%d, %d\n", sumx, sumy);
}
