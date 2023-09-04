#include "main.h"
#include "stdlib.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX
 * standard output
 * @filename: pointer to file being read
 * @letters: number of letters to read and print
 * Return: number of letters read and printed or 0
 * if filename is NULL or write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd;
	ssize_t w;
	ssize_t r;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	r = read(fd, buff, letters);
	w = write(STDOUT_FILENO, buff, r);

	free(buff);
	close(fd);
	return (w);
}
