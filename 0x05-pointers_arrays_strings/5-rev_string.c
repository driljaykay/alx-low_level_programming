#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string
 * Return: reversed string
 */

void rev_string(char *s)
{
	char revs = s[0];
	int count = 0;
	int r;

	while (s[count] != '\0')
		count++;
	for (r = 0; r < count; r++)
	{
		count--;
		revs = s[r];
		s[r] = s[count];
		s[count] = revs;
	}
}
