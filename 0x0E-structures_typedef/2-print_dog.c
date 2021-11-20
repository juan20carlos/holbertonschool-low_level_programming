#include <stdio.h>
#include "dog.h"
/**
 * print_dog - imprime las estructura dog
 * @d: puntero a la estructura
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((*d).name == NULL)
		{
			printf("Name: (nill)\n");
		}
		else
		{
			printf("Name: %s\n", (*d).name);
		}
		printf("Age: %f\n", (*d).age);
		if ((*d).owner == NULL)
		{
			printf("Owner: (nill)\n");
		}
		else
		{
			printf("owner: %s\n", (*d).owner);
		}
	}
	else
	{
		return;
	}
}
