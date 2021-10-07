#include "main.h"
/**
 * print_numbers - prints the numbers
 *
 * void: vacio
 *
 */
void print_numbers(void)
{
	int c;

	c = 48;
	while (c <= 57)
	{
		_putchar(c);
		c = c + 1;
	}
	_putchar('\n');
}
