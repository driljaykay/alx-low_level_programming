#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print in binary
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned int pbrn = 1;

	if (n > pbrn) /* checks if the number is greater than 1 */
		print_binary(n >> pbrn); /* recursively calls itself with
					    * the number shifted right by one bit
					    */
	_putchar((n & pbrn) + '0');
}
