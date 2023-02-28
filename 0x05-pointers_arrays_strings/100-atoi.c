#include "main.h"

/**
 * _atoi - function that converts a string to an integer
 * @s: pointer to be converted
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int d = 0;
	unsigned int mo = 0;
	int max = 1;
	int abc = 0;

	while (s[d])
	{
		if (s[d] == 45)
		{
			max *= -1;
		}
		while (s[d] >= 48 && s[d] <= 57)
		{
			abc = 1;
			mo = (mo * 10) + (s[d] - '0');
			d++;
		}
		if (abc == 1)
		{
			break;
		}
		d++;
	}
	mo *= max;

	return (mo);
}

