#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first string to concat
 * @s2: second string to concat
 * Return: newly allocated space in memory with contents of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, d = 0;
	char *cc;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[a])
		a++;
	while (s2[b])
		b++;
	d = a + b;
	cc = malloc((sizeof(char) * d) + 1);

	if (cc == NULL)
		return (NULL);
	b = 0;
	while (c < d)
	{
		if (c <= a)
			cc[c] = s1[c];
		if (c >= a)
		{
			cc[c] = s2[b];
			b++;
		}
		c++;
	}
	cc[c] = '\0';
	return (cc);
}
