#include "main.h"

/**
 * print_times_table - prints the n times tables
 * starting with 0
 * @n: the value of times table to be printed
 */

void print_times_table(int n)
{
	int numb, mult, prodt;

	if (n >= 0 && n <= 15)
	{
		for (numb = 0; numb <= n; numb++)
		{
			_putchar('0');
			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');
				prodt = numb * mult;
				if (prodt <= 99)
				_putchar(' ');
				if (prodt <= 9)
				_putchar(' ');
				if (prodt >= 100)
				{
					_putchar((prodt / 100) + '0');
					_putchar(((prodt / 10) % 10) + '0');
				}
				else if (prodt <= 99 && prodt >= 10)
				{
					_putchar((prodt / 10) + '0');
				}
				_putchar((prodt % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
