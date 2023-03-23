#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - program that performs simple operations
 * @argc: number of arguments supplied to program
 * @argv: array of pointers to arguments
 * Return: always 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int n, m; /* n is number 1 and m is number 2 */
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n = atoi(argv[1]);
	op = argv[2];
	m = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' && m == 0) || (*op == '%' && m == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(n, m));
	return (0);
}
