#include "main.h"
#include <stdlib.h>
/**
 *
 *
 *
 *
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;
	

	p = malloc(size*sizeof(char));
	for(i = 0; i <size; i++)
	{
	p[i]=c;
	}

	return (p);
}

