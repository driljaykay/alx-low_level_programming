#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of paramters passed to function
 * @...: variable number of paramters to calculate the sum of
 * Return: If n == 0, 0
 * Otherwise - sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list sac;
	unsigned int j, sum = 0;

	va_start(sac, n);

	for (j = 0; j < n; j++)
		sum += va_arg(sac, int);

	va_end(sac);

	return (sum);
}
