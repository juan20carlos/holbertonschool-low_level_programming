#include "main.h"
/**
 * print_alphabet - prints the alphabet
 *
 * followed by a new line.
 */
void print_alphabet(void)
{
	int c = 97;

	while (c <= 122)
	{
		_putchar(c);
		c = c + 1;
	}
	_putchar('\n');

}
