#include "main.h"
/**
 * rev_string - reverses a string
 *
 * @s: Pointer
 *
 */
void rev_string(char *s)
{
	int i;
	int j;
	char str[500];

	j = 0;
	i = 0;
	while (*(s + i))
	{
		*(str + i) = *(s + i);
		i = i + 1;
	}
	i = i - 1;
	while (i >= 0)
	{
		*(s + i) = *(str + j);
		j = j + 1;
		i = i - 1;
	}
}
