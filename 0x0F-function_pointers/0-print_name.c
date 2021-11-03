#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - Write a function that prints a name.
 *
 * @name: pointer
 * @f: function call
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		(*f)(name);
	}
}
