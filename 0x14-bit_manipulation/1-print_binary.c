#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print in binary
 */

void print_binary(unsigned long int n)
{
	unsigned long int binary_rep = 1UL << ((sizeof(unsigned long int) * 8) - 1);
	int printed = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	do {
		if (n & binary_rep)
		{
			_putchar('1');
			printed = 1;
		}
		else if (printed)
		{
			_putchar('0');
		}
		binary_rep >>= 1;
	} while (binary_rep != 0);
}
