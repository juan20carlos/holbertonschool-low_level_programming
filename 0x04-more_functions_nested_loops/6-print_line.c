#include "main.h"
/**
 * print_line -  draws a straight line in the terminal
 *
 * @n: variable
 *
 */
void print_line(int n)
{
	int l = 1;

	if (n > 0)
	{
		while (l <= n)
		{
		_putchar ('_');
		l = l + 1;
		}
	}
	_putchar('\n');

}
