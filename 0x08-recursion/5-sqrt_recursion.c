#include "main.h"

int _sqrt(int n, int a);

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number to calculate the natural square root
 *
 * Return: resulting square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}

/**
 * _sqrt - recurses to find the natural
 * square root of a number
 * @n: number whose sqaure root is calculated
 * @a: iterator
 *
 * Return: the resulting square root
 */

int _sqrt(int n, int a)
{
	if (a * a > n)
		return (-1);
	if (a * a == n)
		return (a);
	return (_sqrt(n, a + 1));
}
