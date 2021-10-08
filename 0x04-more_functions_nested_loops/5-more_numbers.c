#include "main.h"
/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 *
 */
void more_numbers(void)
{
	int c;
	int i;

	c = 0;
	while (c < 10)
	{
		i = 0;
		while (i <= 14)
		{
			if ((i / 10) != 0)
			{
			_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
			i = i + 1;
		}
		_putchar('\n');
		c = c + 1;
	}
}
