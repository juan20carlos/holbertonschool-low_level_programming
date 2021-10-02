#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry
 *
 * Return: Always o (Success)
 */
int main(void)
{
	int n;
	int b;

	srand(time(0));
	n = rand() - RAND_MAX / 2; /* your code goes there */
	b = n % 10;
	if (b > 5)
	{
	       printf("Last digit of %d is %d and is greater than 5", n, b);
	}
	else if (b == 0)
	{
		printf("Last digit of %d is %d and is 0", n, b);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, b);
	}
	return (0);
}
