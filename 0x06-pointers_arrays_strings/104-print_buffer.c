#include "main.h"
#include <stdio.h>

/**
 * print_buffer - function that prints a buffer
 * @b: content of size bytes of the buffer
 * @size: size of buffer
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int a, d, c;

	a = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (a < size)
	{
		d = size - a < 10 ? size - a : 10;
		printf("%08x: ", a);
		for (c = 0; c < 10; c++)
		{
			if (c < d)
				printf("%02x", *(b + a + c));
			else
				printf("  ");
			if (c % 2)
			{
				printf(" ");
			}
		}
		for (c = 0; c < d; c++)
		{
			int e = *(b + a + c);

			if (e < 32 || e > 132)
			{
				e = '.';
			}
			printf("%c", e);
		}
		printf("\n");
		a += 10;
	}
}
