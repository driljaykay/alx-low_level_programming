#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check - string there are digit
 * @str: array string
 *
 * Return: Always 0
 */

int check_num(char *str)
{
	unsigned int c = 0;

	while (c < strlen(str))
	{
		if (!isdigit(str[c]))
		{
			return (0);
		}
		c++;
	}
	return (1);
}

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int c = 1, s, sum = 0;

	while (c < argc)
	{
		if (check_num(argv[c]))
		{
			s = atoi(argv[c]);
			sum += s;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		c++;
	}
	printf("%d\n", sum);
	return (0);
}
