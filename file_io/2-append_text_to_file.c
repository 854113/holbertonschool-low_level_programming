#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f;

	f = open(filename, O_APPEND);
	if (f == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
		write(f, text_content, strlen(text_content));
	close(f);
	return (1);
}
