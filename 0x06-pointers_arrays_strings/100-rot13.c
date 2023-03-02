#include "main.h"
#include <stdio.h>

/**
 * rot13 - function that encodes a string using rot13
 * @p: pointer to string params
 *
 * Return: *p
 */

char *rot13(char *p)
{
	int b, d;
	char data1[] =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] =
		"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (b = 0; p[b] != '\0'; b++)
	{
		for (d = 0; d < 52; d++)
		{
			if (p[b] == data1[d])
			{
				p[b] = datarot[d];
				break;
			}
		}
	}
	return (p);
}
