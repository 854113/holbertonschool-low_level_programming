#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f = 0, count = 0;
	char *buff;

	f = open(filename, O_RDONLY);
	if (f == -1)
	{
		return (0);
	}
	buff = malloc(letters);
	if (buff == NULL)
	{
		return (0);
	}
	count = read(f, buff, letters);
	count = write(STDOUT_FILENO, buff, count);
	close(f);
	free(buff);
	return (count);
}
