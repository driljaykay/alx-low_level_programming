#include <stdio.h>
#include <math.h>

/**
 * main -  finds and prints the largest prime factor of the number 612852475143
 * Return: always 0
 */

int main(void)
{
	long y, maxk;
	long numb = 612852475143;
	double square = sqrt(numb);

	for (y = 1; y <= square; y++)
	{
		if (numb % y == 0)
		{
			maxk = numb / y;
		}
	}
	printf("%ld\n", maxk);
	return (0);
}
