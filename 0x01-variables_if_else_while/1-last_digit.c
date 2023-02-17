#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	int n;
	int t;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	t = n % 10;
	if (t > 5)
		printf("Last digit of %d is %d and is greater than 5", n, t);
	else if (t == 0)
		printf("Last digit of %d is %d and is zero", n, t);
	else if (t < 6 && t != 0)
		printf("Last digit of %d is %d and is less than 6 not 0", n, t);
	printf("\n");

	return (0);
}
