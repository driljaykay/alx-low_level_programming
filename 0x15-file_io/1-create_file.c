#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Returns: 1 on success, -1 on failure
 * filename is NULL return -1
 */

int create_file(const char *filename, char *text_content)
{
	int file_descriptor, res_wr_fcn, index, success = 1, failure = -1;

	if (filename == NULL)
		return (failure);

	if (text_content == NULL)
		text_content = "";

	file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (file_descriptor == failure)
		return (failure);

	index = 0;
	do {
		res_wr_fcn = write(file_descriptor, text_content + index, success);

		if (res_wr_fcn == failure)
		{
			close(file_descriptor);
			return (failure);
		}
		index++;
	} while (*(text_content + index - success) != '\0');

	res_wr_fcn = close(file_descriptor);

	if (res_wr_fcn == failure)
		return (failure);

	return (success);
}
