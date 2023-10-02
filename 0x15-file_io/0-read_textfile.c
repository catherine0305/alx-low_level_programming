#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output
 * @letters: number of letters it should read and print
 * @filename: file name
 * Return: number of letters it read and print
 * or 0 if write fails, filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int h;
	ssize_t i, j;
	char *buff;

	if (filename == NULL)
		return (0);
	h = open(filename, O_RDONLY);

	if (h == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	i = read(h, buff, letters);
	if (i == -1)
	{
		free(buff);
		close(h);
		return (0);
	}
	j = write(STDOUT_FILENO, buff, i);
	if (j == -1)
	{
		free(buff);
		close(h);
		return (0);
	}
	close(h);
	return (i);
}

