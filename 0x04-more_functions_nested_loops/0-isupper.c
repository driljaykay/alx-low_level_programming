#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * @y: the number to be checked
 * Return: 1 for upper letter or 0 for anything else
 */

int _isupper(int y)
{
	if (y >= 65 && y <= 90)
	{
		return (1);
	}
	return (0);
}
