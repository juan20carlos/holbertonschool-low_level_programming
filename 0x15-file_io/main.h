#ifndef _JUAN_CARLOS_
#define _JUAN_CARLOS_
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);
#endif
