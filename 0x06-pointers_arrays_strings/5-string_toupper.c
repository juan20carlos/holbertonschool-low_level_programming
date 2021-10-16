#include "main.h"
/**
 * string_toupper - changes all lowercase to uppercase
 *
 * @str: pointer
 * Return: Always str
 *
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (*(str + i))
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
		{
			*(str + i) -= 'a' - 'A';
		}
		i = i + 1;
	}
		return (str);
}

