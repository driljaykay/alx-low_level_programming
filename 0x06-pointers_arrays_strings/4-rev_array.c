#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: array of integers
 * @n: number of elements of array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int r, s;

	for (r = 0; r < n--; r++)
	{
		s = a[r];
		a[r] = a[n];
		a[n] = s;
	}
}


