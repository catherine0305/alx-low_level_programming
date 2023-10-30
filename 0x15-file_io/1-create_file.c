#include "main.h"
/**
 * create_file - creates file
 * @filename: file
 * @text_content: string
 * Return: 1 if success -1 if error
 */
int create_file(const char *filename, char *text_content)
{
	int file_d;
	int n;
	int rwr;

	if (!filename)
		return (-1);

	file_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_d == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (n = 0; text_content[n]; n++)
		;

	rwr = write(file_d, text_content, n);

	if (rwr == -1)
		return (-1);

	close(file_d);
	return (1);
}
