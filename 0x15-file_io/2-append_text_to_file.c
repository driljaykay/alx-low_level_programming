#include <string.h>
#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int def, bjw, tl, bw, fail = -1, success = 1;

	if (filename == NULL)
		return (fail);

	def = open(filename, O_WRONLY | O_APPEND);

	if (def == fail)
	{
		return (fail);
	}

	if (text_content != NULL)
	{
		tl = strlen(text_content);
		bw = write(def, text_content, tl);
		if (bw != tl)
		{
			close(def);
			return (fail);
		}
	}

	do {
		bjw = write(def, text_content + bw, tl - bw);

		if (bjw == -1)
		{
			close(def);
			return (fail);
		}
		bw += bjw;
	} while (bw < tl);

	close(def);
	return (success);
}
