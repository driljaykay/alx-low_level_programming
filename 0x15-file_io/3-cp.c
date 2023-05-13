#include "main.h"

/**
 * read_content_of_file - function that reads content of file into a buffer
 * @filename: name of file to read from
 * @buffer: buffer to store file content
 * Return: number of bytes read, or -1 on failure
 */
ssize_t read_content_of_file(char *filename, char *buffer)
{
int source_file, failure = -1;
ssize_t read_bytes;

source_file = open(filename, O_RDONLY);
if (source_file == failure)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}

read_bytes = read(source_file, buffer, 1024);
if (read_bytes == failure)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}

if (close(source_file) == failure)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source_file);
	exit(100);
}

return (read_bytes);
}

/**
 * write_content_of_file - function that writes content of buffer to file
 * @filename: name of file to write to
 * @buffer: buffer holding data to write
 * @length: length of data to write
 * Return: 0 on success, or an error code on failure
 */

int write_content_of_file(char *filename, char *buffer, ssize_t length)
{
int destination_file, failure = -1, success = 1;
ssize_t bytes_written;

destination_file = open(filename, O_WRONLY | O_CREAT | O_TRUNC
		, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
if (destination_file == failure)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
}

bytes_written = write(destination_file, buffer, length);
if (bytes_written == failure)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
}

if (close(destination_file) == failure)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", destination_file);
	exit(100);
}

return (success);
}

/**
 * copy_content_from_one_to_another - program that copies
 * the content of a file to another file.
 * @file_from: name of the source file
 * @file_to: name of the destination file
 * Return: 0 on success, or an error code on failure
 */

int copy_content_from_one_to_another(char *file_from, char *file_to)
{
char buffer[1024];
ssize_t read_bytes;

read_bytes = read_content_of_file(file_from, buffer);

write_content_of_file(file_to, buffer, read_bytes);

return (0);
}

/**
 * main - a function that calls copy_content_from_one_to_another
 * to copy the content of a file to another file.
 * @argc: number of arguments passed to the program
 * @argv: array of pointers to the arguments
 *
 * Return: 0 on success, or an error code on failure
 */

int main(int argc, char *argv[])
{
if (argc != 3)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

copy_content_from_one_to_another(argv[1], argv[2]);
return (0);
}
