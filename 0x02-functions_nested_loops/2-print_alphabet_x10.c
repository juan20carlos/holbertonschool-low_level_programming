#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * in lowercase
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	j = 1;
	while (j <= 10)
	{
		i = 97;
		while (i <= 122)
		{
			_putchar(i);
			i = i + 1;
		}
		_putchar('\n');
		j = j + 1;
	}
}
