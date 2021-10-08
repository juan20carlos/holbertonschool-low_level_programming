#include "main.h"
/**
 * print_square -  function that prints a square
 *
 * @size: variable input
 */
void print_square(int size)
{
	int h;
	int v;

	if (size > 0)
	{
	h = 1;
	while (h <= size)
	{
		v = 1;
		while (v <= size)
		{
		_putchar(35);
		v = v + 1;
		}
		_putchar('\n');
		h = h + 1;
	}
	}
	else
	{
	_putchar('\n');
	}
}
