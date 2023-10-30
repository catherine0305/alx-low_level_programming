#include "main.h"
/**
 * append_text_to_file - appends text
 * @filename: file
 * @text_content: text
 * Return: 1 if success -1 if error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_d;
	int n;
	int rwr;

	if (!filename)
		return (-1);

	file_d = open(filename, O_WRONLY | O_APPEND);

	if (file_d == -1)
		return (-1);

	if (text_content)
	{
		for (n = 0; text_content[n]; n++)
			;

		rwr = write(file_d, text_content, n);

		if (rwr == -1)
			return (-1);
	}

	close(file_d);

	return (1);
}
