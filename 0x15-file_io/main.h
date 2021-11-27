#ifndef _JUAN_CARLOS_
#define _JUAN_CARLOS_
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <limits.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
size_t _strlen(char *str);
int append_text_to_file(const char *filename, char *text_content);
int _strlen_recursion(char *s);
int create1_file(const char *file_from, const char *file_to);
#endif
