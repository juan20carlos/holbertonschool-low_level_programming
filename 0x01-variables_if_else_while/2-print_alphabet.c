#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always o (success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c = c + 1;
	}
	putchar('\n');
	return (0);
}
