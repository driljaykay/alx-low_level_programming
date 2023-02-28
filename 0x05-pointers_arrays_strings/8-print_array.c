#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers
 * @a: array of integers
 * @n: number of elements of the array to be printed
 * Return: a and n
 */

void print_array(int *a, int n)
{
	int z;

	for (z = 0; z < n; z++)
	{
		printf("%d", a[z]);
		if (z != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
