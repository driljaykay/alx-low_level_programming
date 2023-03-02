#include "main.h"
/**
 * _strncpy - function that copies a string.
 * @dest: destination of string
 * @src: source of string
 * @n: number of bytes copied from string
 *
 * Return: pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int z = 0;

	while (z < n && src[z] != '\0')
	{
		dest[z] = src[z];
		z++;
	}
	while (z < n)
	{
		dest[z] = '\0';
		z++;
	}
	return (dest);
}
