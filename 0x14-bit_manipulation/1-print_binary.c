#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 *
 * @n: The number to print in binary
 */

void print_binary(unsigned long int n)
{
	unsigned long int binary_rep = 1;
	int i = 0;

	do {
		binary_rep <<= 1;
		i++;
	} while (binary_rep <= n);

	binary_rep >>= 1;

	while (binary_rep != 0)
	{
		if (n & binary_rep)
			putchar('1');

		else
			putchar('0');
		binary_rep >>= 1;
	}
}
