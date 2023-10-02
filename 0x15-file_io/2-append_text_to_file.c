#include "main.h"
/**
 * append_text_to_file - appends text at the end of file
 * @filename: file name
 * @text_content: NULL terminated string to add at the end of file
 * Return: 1 on success or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int h, j, k;

	if (!filename)
		return (-1);
	h = open(filename, O_WRONLY | O_APPEND);
	if (h == -1)
		return (-1);
	if (text_content)
	{
		for (j = 0; text_content[j]; j++)
			k = write(h, text_content, j);
		if (k == -1)
			return (-1);
	}
	close(h);
	return (1);
}
