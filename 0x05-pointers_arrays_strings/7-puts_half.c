#include "main.h"
/**
 * puts_half - prints half of a string
 *
 * @str: Pointer
 *
 */
void puts_half(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (*(str + i))
	{
		i = i + 1;
	}
	j = i / 2;
	if (i % 2)
	{
		j += 1;
	}
	while (j < i)
	{
		_putchar(*(str + j));
		j = j + 1;
	}
	_putchar('\n');
}
