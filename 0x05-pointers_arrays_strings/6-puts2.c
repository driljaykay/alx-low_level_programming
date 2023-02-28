#include "main.h"

/**
 * puts2 - function that prints every other character of a string,
 *  starting with the first character
 *  @str: string to be treated
 *  Return: print
 */

void puts2(char *str)
{
	int i = 0;
	int j = 0;
	char *k = str;
	int l;

	while (*k != '\0')
	{
		k++;
		i++;
	}
	j = i - 1;
	for (l = 0; l <= j; l++)
	{
		if (l % 2 == 0)
		{
			_putchar(str[l]);
		}
	}
	_putchar('\n');
}
