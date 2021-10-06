#include "main.h"
/**
 * _abs - absolute value of an integer
 *
 * @n: input
 *
 * Return: Always 0
 *
 */
int _abs(int n)
{

	if (n >= 0)
	{
		n = n * 1;
		return (n);
	}
	else
	{
		n = n * (-1);
		return (n);
	}

}
