#include "main.h"
/**
 * _strlen - cuenta los caracteres
 *
 * @str: puntero apunta al string
 * Return: retorna el numero de caracteres
 */
size_t _strlen(char *str)
{
	size_t i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}
/**
 * create_file - crea un archivo
 *
 * @filename: nombre de la carpeta creada
 * @text_content: escribe el string en el file
 * Return: 1 si es exitoso or -1 si falla
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t escritura = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	escritura = write(fd, text_content, _strlen(text_content));
	if (escritura == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
