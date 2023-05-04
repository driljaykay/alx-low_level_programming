#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if there is one or more chars
 * in the string b that is not 0 or 1 or if b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	const char *p;

	if (b == NULL)
		return (0);

	p = b;
	do {
		if (*p == '0' || *p == '1')
		{
			num = num * 2 + (*p - '0');
			p++;
		}
		else
		{
			return (0);
		}
	} while (*p != '\0');

	return (num);
}
