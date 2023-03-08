#include "main.h"

int check_prime(int n, int c);

/**
 * is_prime_number - function that returns 1
 * if the input integer is a prime number, otherwise return 0
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, n - 1));
}

/**
 * check_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @c: iterator
 *
 * Return: 1 if n is prime, 0 if otherwise
 */

int check_prime(int n, int c)
{
	if (c == 1)
		return (1);
	if (n % c == 0 && c > 0)
		return (0);
	return (check_prime(n, c - 1));
}
