#include "main.h"
#include <stdlib.h>

/**
* read_textfile- Read text file print to STDOUT.
* @filename: text file to be read
* @letters: number of letters to be printed
* Return: w- actual number of bytes read and printed
*        0 when function fails.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t fd;
ssize_t x;
ssize_t y;

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buf = malloc(sizeof(char) * letters);
y = read(fd, buf, letters);
x = write(STDOUT_FILENO, buf, y);

free(buf);
close(fd);
return (x);
}
