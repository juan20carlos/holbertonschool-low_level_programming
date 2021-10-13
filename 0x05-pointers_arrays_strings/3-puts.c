#include "main.h"
/**
 * _puts - prints a string
 *
 * @str: Pointer
 *
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (*(str + i))
	{
		_putchar(*(str + i));
		i = i + 1;
	}
	_putchar('\n');
}
