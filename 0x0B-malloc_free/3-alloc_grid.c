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
	int i, j;
	int **p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	p = (int **)malloc(width * sizeof(int *));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		p[i] = (int *)malloc(sizeof(int) * height);
		if (p[i] == NULL)
		{
			for (j = 0; j < i; i++)
				free(p[j]);
			free(p);
			return (NULL);
		}
		for (j = 0; j < height; j++)
		{
			p[i][j] = 0;
		}

	}
	return (p);
}
