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
	return (failure);
}

read_bytes = read(source_file, buffer, 1024);
if (read_bytes == failure)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	return (failure);
}

if (close(source_file) == failure)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source_file);
	return (failure);
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

destination_file = open(filename, O_WRONLY | O_CREAT | O_TRUNC);
if (destination_file == failure)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	return (failure);
}

bytes_written = write(destination_file, buffer, length);
if (bytes_written != length)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	return (failure);
}

if (close(destination_file) == failure)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", destination_file);
	return (failure);
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
if (read_bytes < 0)
	exit(98);

if (write_content_of_file(file_to, buffer, read_bytes) < 0)
	exit(99);

return (EXIT_SUCCESS);
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
        dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
        exit(97);
}

if (copy_content_from_one_to_another(argv[1], argv[2]) == -1)
{
        exit(101);
}

if (chmod(argv[2], S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH) == -1)
{
        dprintf(STDERR_FILENO, "Error: Can't set file permissions for %s\n", argv[2]);
        exit(101);
}

return (EXIT_SUCCESS);
}
