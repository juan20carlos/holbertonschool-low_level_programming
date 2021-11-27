#include "main.h"
/**
 *  _strlen_recursion - calculate the length of a string
 *
 * @s: string
 * Return: Length of the string s
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		return (i + _strlen_recursion(s + 1));
	}
	return (i);
}
/**
 * create1_file - function that copy a text file in another texFile
 *
 * @file_from: textFile1
 * @file_to: TextFile2
 * Return: number of bits that writed, exit 98, 99, or 100 if fail
 */
int create1_file(const char *file_from, const char *file_to)
{
	int fd = 0, per = 0, fd_2;
	ssize_t leer = 1024, escribir = 0, cerrar = 0, cerrar_1 = 0;
	char buffer[1024];

	fd = open(file_from, O_CREAT);
	if (fd == -1)
	{
		goto error98;
	}
	per = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fd_2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, per);
	if (fd_2 == -1)
		goto error99;
	while (leer >= 1024)
	{
		leer = read(fd, buffer, 1024);
		if (leer == -1)
			goto error98;
		escribir = write(fd_2, buffer, leer);
		if (escribir == -1)
			goto error99;
	}
	cerrar = close(fd);
	if (cerrar == -1)
		goto error100;
	cerrar_1 = close(fd_2);
	if (cerrar_1 == -1)
		goto error100;
	return (0);
error98:
	dprintf(STDERR_FILENO, "Error: Can't read from file%s\n", file_from);
	exit(98);
error99:
	dprintf(STDERR_FILENO, "Error: Can't write to%s\n", file_to);
	exit(99);
error100:
	dprintf(STDERR_FILENO, "Error: Can't close fd%d\n", fd_2);
	exit(100);
}
/**
 * main - check the code
 *
 * @ac: number of arguments
 * @av: arguments
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	create1_file(av[1], av[2]);
	return (0);
}
