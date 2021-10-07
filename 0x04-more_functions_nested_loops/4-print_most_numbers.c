#include "main.h"
/**
 * print_most_numbers - prints the numbers, from 0 to 9
 *
 */
void print_most_numbers(void)
{
	int c;

	c = 48;
	while (c <= 57)
	{
		if (c != 50 && c != 52)
		{
			_putchar(c);
		}
		c = c + 1;
	}
	_putchar('\n');
}

