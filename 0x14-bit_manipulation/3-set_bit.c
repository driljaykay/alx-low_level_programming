#include <stdio.h>
#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: pointer to the number
 * @index: index of the bit to set starting from 0
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int val_bit;
	int sevab = 1;
	int reval = -1;

	if (index >= sizeof(unsigned long int) * 8)
		return (reval);

	val_bit = 1UL << index;

	do {
		if ((*n & val_bit) == val_bit)
			break;
		*n |= val_bit;
	} while (0);

	return (sevab);
}
