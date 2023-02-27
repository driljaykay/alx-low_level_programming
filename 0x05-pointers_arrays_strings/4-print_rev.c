#include "main.h"

/**
 * print_rev - function that prints a string
 * in reverse, followed by a new line
 * @s: string to print
 * Return: void
 */

void print_rev(char *s)
{
	int c = 0;
	int o;

	while (*s != '\0')
	{
		c++;
		s++;
	}
	s--;
	for (o = c; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
