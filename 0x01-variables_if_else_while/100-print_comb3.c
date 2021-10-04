#include <stdio.h>
/**
 * main - Entry  point
 *
 * Return: Access 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	i = 48;
	while (i < 58)
	{
		j = 48;
		while (j < 58)
		{
			putchar (i);
			putchar (j);
			if (i == 57 && j == 57)
			{
				break;
			}
			putchar (44);
			putchar (32);
			j = j + 1;
		}
		i = i + 1;
	}

	putchar ('\n');
	return (0);
}


