#include "main.h"
#include<stdlib.h>
/**
 *
 *
 *
 *
 */
char *_strdup(char *str)
{
	int i;
	char *p;
	
   
	for(i = 0; str[i] !='\0';i++)

	p = malloc(i*sizeof(char));
	for (i = 0;str[i] !='\0';i++)
	{
		p[i]=str[i];
	}
	
	return (p);
}


