#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: number of times to print diagonal lines
 * Return: empty
 */

void print_diagonal(int n)
{
	int p, q;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (p = 0; p < n; p++)
		{
			for (q = 0; q < p; q++)
			{
				putchar(32);
			}
			putchar(92);
			putchar('\n');
		}
	}
}
