#include "main.h"

/**
 * rev_string - reverse array
 * @n: integer parameters
 * Return: 0
 */

void rev_string(char *n)
{
	int l = 0, m = 0;
	char tem;

	while (*(n + l) != '\0')
	{
		l++;
	}
	l--;

	for (m = 0; m < l; m++, l--)
	{
		tem = *(n + m);
		*(n + m) = *(n + l);
		*(n + l) = tem;
	}
}

/**
 * infinite_add - function that adds two numbers
 * @n1: first number to add
 * @n2: Second number to add
 * @r: buffer that the function will use to store the result
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, l = 0, m = 0, digits = 0;
	int value1 = 0, value2 = 0, tem_tit = 0;

	while (*(n1 + l) != '\0')
		l++;
	while (*(n2 + m) != '\0')
		m++;
	l--;
	m--;

	if (m >= size_r || l >= size_r)
		return (0);
	while (m >= 0 || l >= 0 || overflow == 1)
	{
		if (l < 0)
			value1 = 0;
		else
			value1 = *(n1 + l) - '0';
		if (m < 0)
			value2 = 0;
		else
			value2 = *(n2 + m) - '0';
				tem_tit = value1 + value2 + overflow;
		if (tem_tit >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (tem_tit % 10) + '0';
		digits++;
		l--;
		m--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
