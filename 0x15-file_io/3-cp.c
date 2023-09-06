#include "main.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#define BUFF_SIZE 1024
/**
 * main - main function
 * @argc: number of arguments
 * @argv: pointer to array of arguments
 * Return: 0 always
 */
int main(int argc, char **argv)
{
	int fl0, fl1, r0, r1;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = malloc(sizeof(char) * BUFF_SIZE);
	if (!buff)
		return (0);

	fl1 = open(argv[1], O_RDONLY);
	error_98(fl1, buff, argv[1]);

	fl0 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	error_99(fl0, buff, argv[2]);

	do {
		r0 = read(fl1, buff, BUFF_SIZE);
		if (r0 == 0)
			break;
		error_98(r0, buff, argv[1]);

		r1 = write(fl0, buff, r0);
		error_99(r1, buff, argv[2]);

	} while (r1 >= BUFF_SIZE);
	r0 = close(fl0);
	error_100(r0, buff);
	r0 = close(fl1);
	error_100(r0, buff);
	free(buff);
	return (0);
}
/**
 * error_98 - checks for error 98
 * @fl0: value to check
 * @buff: the buffer
 * @argv: array of arguments
 */
void error_98(int fl0, char *buff, char *argv)
{
	if (fl0 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv);
		free(buff);
		exit(98);
	}
}
/**
 * error_99 - checks for error 99
 * @fl0: value to check
 * @buff: the buffer
 * @argv: array of arguments
 */
void error_99(int fl0, char *buff, char *argv)
{
	if (fl0 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv);
		free(buff);
		exit(99);
	}
}
/**
 * error_100 - checks for error 100
 * @fl0: value to check
 * @buff: the buffer
 */
void error_100(int fl0, char *buff)
{
	if (fl0 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fl0);
		free(buff);
		exit(100);
	}
}
