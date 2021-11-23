#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - imprime numeros seguido por una linea
 * @separator: seprador que imprime entre numeros
 * @n: imprime numero de argumentos.
 *
 * Return : no regresa nada
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		printf("%s", separator);
	}
	printf("\n");
}
