 #include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * Return: Always n
 */
int print_last_digit(int n)
{
	int d;
	d =  n % 10;
	
	if (d < 0)
	{
		d = d * (-1);
		
	}
	_putchar (d + '0');
	return (d);

}

