#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 * filename is NULL return -1
 */

int create_file(const char *filename, char *text_content)
{
	int file_descriptor, res_wr_fcn, index = 0, success = 1, failure = -1;

	if (filename == NULL)
        return (failure);
	
	if (text_content)
	{
		while (text_content[index])
			index++;
	}
	
	do {
		file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC);
	} while (file_descriptor == failure);
	
	if (text_content)
	{
		do {
			res_wr_fcn = write(file_descriptor, text_content, index);
		} while (res_wr_fcn == failure);
	}
	
	if (chmod(filename, S_IRUSR | S_IWUSR) == failure)
		return (failure);

	return (success);
}
