#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: number of letters to read and print
 * Return: number of letters read and printed, or 0 if error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t fd, r, w;
char *buffer;

if (!filename)
{
return (0);
}

buffer = malloc(letters * sizeof(char));

if (!buffer)
{
return (0);
}

fd = open(filename, O_RDONLY);
r = read(fd, buffer, letters);
w = write(STDOUT_FILENO, buffer, r);

if (fd == -1 || r == -1 || w == -1 || w != r)
{
free(buffer);
return (0);
}

free(buffer);
close(fd);

return (w);
}
