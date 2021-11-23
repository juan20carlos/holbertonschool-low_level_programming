#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - suma de los parametros
 *
 * @n: numero de parametros
 * Return: suma de todo los parametros
 */
int sum_them_all(const unsigned int n, ...)
{
	int suma  = 0;
	unsigned int i;
	va_list ap;/*guarda la lista de argumentos variables*/

	va_start(ap, n); /* inicializa la list*/
	for (i = 0; i < n; i++)
	{
		suma += va_arg(ap, int);
	}
	va_end(ap);/*sale de la list*/
	return (suma);
}
