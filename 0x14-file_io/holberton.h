#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define ERROR1(x, s1)\
do {\
dprintf(STDERR_FILENO, "%s\n", s1);\
exit(x);\
} while (0)

#define ERROR2(x, s1, s2)\
do {\
dprintf(STDERR_FILENO, "%s %s\n", s1, s2);\
exit(x);\
} while (0)

#define ERROR3(x, s1, fd)\
do {\
dprintf(STDERR_FILENO, "%s %d\n", s1, fd);\
exit(x);\
} while (0)

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);


#endif
