#include "main.h"
#include <unistd.h>
/**
 * read_textfile - lee un archivo e imprime
 * @filename: nombre de la carpeta a leer
 * @letters: numero de letras
 *
 * Return: retorna el texto y numero de letras
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t lectura, escritura;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	lectura = read(fd, buf, letters);
	close(fd);
	if (lectura == -1)
	{
		return (0);
	}
	escritura = write(STDOUT_FILENO, buf, lectura);
	if (escritura != lectura)
	{
		return (0);
	}
	return (escritura);
}
