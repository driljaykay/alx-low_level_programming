#include <stdio.h>
#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: pointer to the number set
 * @index: index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int set_value;

	{
		if (index > sizeof(unsigned long int) * 8)
			return (-1);
	}

	set_value = 1 << index;

	do {
		if ((*n & set_value) != 0)
			break;

		*n |= set_value;
	} while (0);

	return (1);
}
