#include "main.h"

/**
 * print_alphabet_x10 - funtcion that prints alphabets 10times
 *
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	int n;
	char o;

	for (n = 1 ; n <= 10 ; n++)
	{
		for (o = 'a' ; o <= 'z' ; o++)
			_putchar(o);
		_putchar('\n');
	}
}
