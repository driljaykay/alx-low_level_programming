#include "main.h"

/**
 * flip_bits - function returns the number of bits needed to
 * flip to get from one number to another
 * @n: number one
 * @m: next number
 *
 * Return: number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int noof = 0;
	unsigned long int exclusor_result = n ^ m;
	unsigned int i = 1;

	do {
		noof += (exclusor_result & i);
		exclusor_result >>= i;
	} while (exclusor_result != 0);

	return (noof);
}
