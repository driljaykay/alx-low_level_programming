#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number whose bit value is to be returned
 * @index: the index, starting from 0 of the bit you want to get
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int soul = sizeof(unsigned long int) * 8;
	unsigned long int vobi = 1;

	if (index >= soul)
		return (-1);

	vobi <<= index;

	do {
		if (n & vobi)
			return (1);
		else
			return (0);
	} while (0);
}
