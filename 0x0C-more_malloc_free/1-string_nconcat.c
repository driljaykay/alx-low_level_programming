#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int a = 0, b = 0, j = 0, k = 0;

	while (s1 && s1[j])
		j++;
	while (s2 && s2[k])
		k++;

	if (n < k)
		s = malloc(sizeof(char) * (j + n + 1));
	else
		s = malloc(sizeof(char) * (j + k + 1));

	if (!s)
		return (NULL);

	while (a < j)
	{
		s[a] = s1[a];
		a++;
	}
	while (n < k && a < (j + n))
		s[a++] = s2[b++];

	while (n >= k && a < (j + k))
		s[a++] = s2[b++];

	s[a] = '\0';
	return (s);
}
