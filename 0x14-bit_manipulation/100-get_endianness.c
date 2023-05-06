#include "main.h"

/**
 * get_endianness - function that checks for the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int num = 1, big_endian = 0, little_endian = 1;
	char *endian_check = (char *)&num;
	int endianness;

	do {
		if (*endian_check == little_endian)
		{
			endianness = little_endian;
		}
	else
	{
		endianness = big_endian;
	}
	} while (++endian_check, --num);

	return (endianness);
}
