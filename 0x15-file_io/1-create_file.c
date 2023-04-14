#include "main.h"

/**
 * create_file - Create a function that creates a file
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int nob, bw, def; /* number of bytes, bytes written and descriptor of file */

	if (filename == NULL)
	{
		return (-1);
	}

	def = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (def == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		nob = 0;
		while (text_content[nob] != '\0')
		{
			nob++;
		}

		bw = write(def, text_content, nob);
		if (bw != nob)
		{
			close(def);
			return (-1);
		}
	}

	close(def);
	return (1);
}
