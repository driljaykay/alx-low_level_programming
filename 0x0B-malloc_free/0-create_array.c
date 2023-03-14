#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars and initializes with specific char
 * @size: array size
 * @c: char to assign to array
 *
 * Return: pointer to the array, NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *s;

	s = malloc(sizeof(char) * size);

	if (size == 0 || s == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		s[j] = c;
	return (s);
}
