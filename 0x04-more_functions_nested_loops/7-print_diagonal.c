#include "main.h"
/**
 * print_diagonal -  draws a diagonal line on the terminal.
 *
 * @n: input
 *
 *
 */
void print_diagonal(int n)
{
	int l;
	int m;

	if (n > 0)
	{
		m = 1;
		while (m <= n)
		{

		l = 1;
		while (l <= n)
		{
			if (m == l)
			{
			_putchar(92);
			break;
			}
			_putchar(' ');
			l = l + 1;
		}
		_putchar('\n');
		m = m + 1;
		}
	}
	else
	{
	_putchar('\n');
	}
}
