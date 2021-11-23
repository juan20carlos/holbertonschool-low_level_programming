#include "main.h"
/**
 * _strlen - cuenta la longitud del string
 *
 * @str: puntero al string
 * Return: retorna # de string
 */
size_t _strlen(char *str)
{
	size_t i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}
/**
 * append_text_to_file - escribe un texto al final del file
 *
 * @filename: nombre del archivo
 * @text_content: escribe le texto al final del file
 * Return: 1 si es exitoso y -1 si es fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t escritura;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		escritura = write(fd, text_content, _strlen(text_content));
	}
	close(fd);
	if (escritura == -1)
	{
		return (-1);
	}
	return (1);
}
