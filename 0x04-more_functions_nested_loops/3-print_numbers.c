#include "main.h"

/**
 * print_numbers - unction that prints the numbers, from 0 to 9
 * Return: numbers 0 to 9
 */

void print_numbers(void)
{
	int k;

	for (k = 0; k <= 9; k++)
	{
		putchar(k + '0');
	}
	putchar('\n');
}
