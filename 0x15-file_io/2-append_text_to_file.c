#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, index, success = 1, failure = -1;
	ssize_t w;

	if (filename == NULL)
		return (failure);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);

	if (file_descriptor == failure)
		return (failure);

	if (text_content == NULL)
	{
		close(file_descriptor);
		return (success);
	}

	index = 0;

	do {
		index++;
	} while (text_content[index] != '\0');

	w = write(file_descriptor, text_content, index);

	close(file_descriptor);

	if (w == failure)
		return (failure);

	if (chmod(filename, 0664) == failure)
		return (failure);

	return (success);
}
