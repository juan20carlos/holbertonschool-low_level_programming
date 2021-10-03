#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c = 44;
	char e = 32;
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		putchar(c);
		putchar(e);
		n = n + 1;
	}
	putchar('\n');
	return (0);
}
