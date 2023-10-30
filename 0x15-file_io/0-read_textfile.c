#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * read_textfile - prints text to POSIX
 * @filename: name of file to read
 * @letters: letters
 * Return: number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	ssize_t lenr, lenw;
	char *buf;

	if (filename == NULL)
		return (0);
	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(file_d);
		return (0);
	}
	lenr = read(file_d, buf, letters);
	close(file_d);
	if (lenr == -1)
	{
		free(buf);
		return (0);
	}
	lenw = write(STDOUT_FILENO, buf, lenr);
	free(buf);
	if (lenr != lenw)
		return (0);
	return (lenw);
}
