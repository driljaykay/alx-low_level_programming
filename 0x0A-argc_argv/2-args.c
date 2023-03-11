#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * All arguments should be printed, including the first one
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
