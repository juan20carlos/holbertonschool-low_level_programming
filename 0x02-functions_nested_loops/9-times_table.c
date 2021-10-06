#include "main.h"
/**
 * times_table -  prints the 9 times table.
 *
 * @void: return vacio
 *@*: por
 *
 *
 */
void times_table(void)
{
	int i;
	int j;

	    i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			if (j != 0)
			{
			_putchar(',');
			_putchar(' ');
			}
			if ((i * j) >= 10)
			{

			_putchar((i * j) / 10 + '0');
			_putchar((i * j) % 10 + '0');
			}
			else if ((i * j) < 10 && j != 0)
			{
				_putchar(' ');
				_putchar((i * j) % 10 + '0');
			}
			else
			{
				_putchar((i * j) % 10 + '0');
			}
			j = j + 1;
		}
		_putchar('\n');
		i = i + 1;
	}
}
