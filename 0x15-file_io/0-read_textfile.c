#include "main.h"

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output
 * @filename: file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 * 0, if the file can not be opened or read
 * 0, if filename is NULL
 * 0, if write fails or does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t num_of_byt_rd, num_of_byt_writ, total_num_of_byt = 0;
	char buffer[1024];

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	do {
		num_of_byt_rd = read(file_descriptor, buffer, sizeof(buffer));

		if (num_of_byt_rd == -1)
			return (0);

		if (num_of_byt_rd == 0)
			break;

		if (num_of_byt_rd < (ssize_t)(letters - total_num_of_byt))
		{
			num_of_byt_writ = write(STDOUT_FILENO, buffer, num_of_byt_rd);
		}
		else
		{
			num_of_byt_writ = write(STDOUT_FILENO, buffer,
					(size_t)(letters - total_num_of_byt));
		}
		if (num_of_byt_writ == -1)
			return (0);

		total_num_of_byt += num_of_byt_writ;
	} while (total_num_of_byt < (ssize_t)letters);

	close(file_descriptor);

	return (total_num_of_byt);
}
