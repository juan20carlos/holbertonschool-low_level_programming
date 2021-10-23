#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * @argc: variable
 * @argv: vector
 *
 * Return: Always 0
 *
 */
int main(int argc, char *argv[])
{
	int sum;
	int i;
	int j;
	int c;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				puts("Error");
				return (1);
			}
		}
	}
	for (c = 1; c < argc; c++)
	{
		sum += atoi(argv[c]);
	}
	printf("%d\n", sum);
	return (0);
}


