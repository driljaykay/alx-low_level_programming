#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: number of lines to draw
 * Return: empty
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			putchar(95);
		}
		putchar('\n');
	}
}
