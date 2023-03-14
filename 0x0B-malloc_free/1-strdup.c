#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - pointer to new string which is a duplicate of string
 * @str: char
 *
 * Return: duplicated string or NULL
 */

char *_strdup(char *str)
{
	int a = 0, b = 0;
	char *j;

	if (str == NULL)
		return (NULL);

	while (str[a] != '\0')
		a++;

	j = malloc(sizeof(char) * (a + 1));

	if (j == NULL)
		return (NULL);

	for (b = 0; str[b]; b++)
		j[b] = str[b];
	return (j);
}
