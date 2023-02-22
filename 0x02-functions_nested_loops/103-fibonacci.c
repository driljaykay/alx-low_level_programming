#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * less than 4000000
 * Return: Nothing
 */

int main(void)
{
	int l = 0;
	long m = 1, n = 2, sum = n;

	while (n + m < 4000000)
	{
		n += m;
		if (n % 2 == 0)
			sum += n;
		m = n - m;
		++l;
	}
	printf("%ld\n", sum);
	return (0);
}
