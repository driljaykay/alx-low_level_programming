#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * use at most n bytes from src
 * @dest: string to be appended on
 * @src: string to be appended to dest
 * @n: number of bytes from src to be appended to dest
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int p = 0, q = 0;

	while (dest[p++])
		q++;
	for (p = 0; src[p] && p < n; p++)
		dest[q++] = src[p];
	return (dest);
}

