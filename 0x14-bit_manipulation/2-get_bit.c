#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: number the bit is gotten from
 * @index: the index, starting from 0, of the bit to get
 *
 * Return: value of the bit at the given index, or -1 if an error occurred
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bitvalue = -1;
	int setval = 1;

	if (index >= (sizeof(unsigned long int) * 8))
		return (bitvalue);

	do {
		if (index == 0)
		{
			bitvalue = n & setval;
			break;
		}
		n >>= setval;
		index--;
	} while (n != 0);

	return (bitvalue);
}
