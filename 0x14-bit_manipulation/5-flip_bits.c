#include <stdio.h>
#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another
 * @n: number one
 * @m: number two
 *
 * Return: number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff_btwn_bits = n ^ m;
	unsigned int numb_of_bits = 0;

	while (diff_btwn_bits != 0)
	{
		if (diff_btwn_bits & 1)
		{
			numb_of_bits++;
		}
		diff_btwn_bits >>= 1;
	}
	return (numb_of_bits);
}
