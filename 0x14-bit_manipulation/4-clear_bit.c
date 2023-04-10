#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the number set
 * @index: index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int set_number;

	{
		if (index > sizeof(unsigned long int) * 8)
		return (-1);
	}
		set_number = 1 << index;

	do {
		if ((*n & set_number) == 0)
			break;

		*n ^= set_number;
	} while (0);

	return (1);
}
