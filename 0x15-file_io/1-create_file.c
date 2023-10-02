#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: NULL terminated string to write the file
 * Return: 1 on success or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int l, m = 1, n = 0;

	if (!filename)
		return (-1);
	l = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (l == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[n])
			n++;
		m = write(l, text_content, n);
	}
	if (m == -1)
		return (-1);
	close(l);
	return (1);
}
