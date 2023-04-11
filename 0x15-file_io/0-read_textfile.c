#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t written, read_bytes, printed_bytes;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	written = open(filename, O_RDONLY);

	if (written == -1)
	{
		free(buffer);
		return (0);
	}

	read_bytes = read(written, buffer, letters);

	if (read_bytes == -1)
	{
		free(buffer);
		close(written);
		return (0);
	}

	printed_bytes = write(STDOUT_FILENO, buffer, read_bytes);

	if (printed_bytes == -1 || printed_bytes != read_bytes)
	{
		free(buffer);
		close(written);
		return (0);
	}

	free(buffer);
	close(written);
	return (printed_bytes);
}
