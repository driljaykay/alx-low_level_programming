#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid passwords
 * for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int password[100];
	int index, sum, num;

	sum = 0;

	srand(time(NULL));

	for (index = 0; index < 100; index++)
	{
		password[index] = rand() % 78;
		sum += (password[index] + '0');
		putchar(password[index]+ '0');
		if ((2772 - sum) - '0' < 78)
		{
			num = 2772 - sum - '0';
			sum += num;
			putchar(num + '0');
			break;
		}
	}
	return (0);
}

