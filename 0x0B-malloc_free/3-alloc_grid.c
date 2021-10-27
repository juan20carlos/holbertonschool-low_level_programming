#include "main.h"
#include<stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * @width: variable
 * @height: variable
 * Return: always NULL
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	p = malloc(width * sizeof(int *));
	if (p == 0)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		p[i] = malloc(sizeof(int) * height);
	}
	return (p);
}
