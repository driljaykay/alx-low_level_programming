#include "main.h"

/**
 * clear_bit -function that sets the value of a bit to 0 at a given index
 * @n: pointer to the number whose bit will be cleared
 * @index: index of the bit to be cleared starting from 0
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int val_bit;
	int sevab = 1;
	int reval = -1;
	unsigned int bitclear = 0;

	if (index >= (sizeof(unsigned long int) * 8))
		return (reval);

	val_bit = sevab << index;

	do {
		if ((*n & val_bit) == bitclear)
			break;

		*n ^= val_bit;
	} while (bitclear);

	return (sevab);
}
