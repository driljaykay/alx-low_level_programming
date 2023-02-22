#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function prints natural numbers
 *
 * @n: function parameter
 *
 * Return: always 0
 */

void print_to_98(int n)
{
	int z;

	if (n >= 0 && n <= 98)
	{
		for (z = n; z <= 98 ; z++)
		{
			printf("%d", z);
			if (z != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (z = n ; z <= 98 ; z++)
		{
			printf("%d", z);
			if (z != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (z = n ; z >= 98 ; z--)
		{
			printf("%d", z);
			if (z != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n == 98)
		printf("%d", n);
}
