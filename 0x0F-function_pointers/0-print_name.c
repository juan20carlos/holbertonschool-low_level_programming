#include "function_pointers.h"
/**
 * print_name - Write a function that prints a name.
 *
 * @name: pointer
 * @f: function call
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
