#include "main.h"
/**
 * print_triangle - prints a triangle
 *
 * @size: input size
 *
 *
 */
void print_triangle(int size)
{
	int h;
	int v;

	h = 1;
	while (h <= size)
	{
		v = size - h;
		while (v >= 1)
		{
			_putchar(' ');
			v = v - 1;
		}
		v = 1;
		while (v <= h)
		{
			_putchar('#');
			v = v + 1;
		}
		h = h + 1;
	_putchar('\n');
	}
}
