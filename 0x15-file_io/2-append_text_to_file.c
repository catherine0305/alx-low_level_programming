#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to the name of the file
 * @text_content: string to add at the end of a file
 * Return: 1 on success or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int p, w, ln = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (ln = 0; text_content[ln];)
			ln++;
	}

	p = open(filename, O_WRONLY | O_APPEND);
	w = write(p, text_content, ln);

	if (p == -1 || w == -1)
		return (-1);

	close(p);

	return (1);
}
