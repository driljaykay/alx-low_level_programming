#include "main.h"

/**
 * _isdigit - function that checks for a digit
 * @i: number to be checked
 * Return: 1 for character that will be a digit or 0 for anything else
 */

int _isdigit(int i)
{
	if (i >= 48 && i <= 57)
	{
		return (1);
	}
	return (0);
}
