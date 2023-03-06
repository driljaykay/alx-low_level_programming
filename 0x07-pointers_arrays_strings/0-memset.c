#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: destination of pointer
 * @b: constant byte
 * @n: bytes of the memory area pointed to
 *
 * Return: memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;
	return (s);
}

