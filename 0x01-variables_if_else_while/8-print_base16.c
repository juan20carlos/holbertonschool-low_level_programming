#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = 48;
	int C = 97;

	while (c <= 57)
	{
		putchar(c);
		c = c + 1;
	}
	while (C <= 102)
	{
		putchar(C);
		C = C + 1;
	}
	putchar('\n');
	return (0);
}
