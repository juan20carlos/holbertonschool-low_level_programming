#include "main.h"
/**
 * print_rev - prints a string, in reverse
 *
 * @s: pointer
 *
 */
void print_rev(char *s)
{
	int i;

	i  = 0;
	while (*(s + i))
	{
		i = i + 1;
	}
		i = i - 1;
	while (i >= 0)
	{
		_putchar(*(s + i));
		i = i - 1;
	}
	_putchar('\n');
}
