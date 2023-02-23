#include "main.h"

/**
 * positive_or_negative - checks for positive_or_negative numbers
 *
 * @i: number to be checked
 * Return: always o
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}
