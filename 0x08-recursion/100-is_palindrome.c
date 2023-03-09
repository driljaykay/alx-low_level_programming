#include "main.h"

int check_pal(char *s, int a, int l);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if so, 0 if otherwise
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string whose length is to be calculated
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks the characters recursively for palindrome
 * @s: string to check
 * @a: iterator
 * @l: length of the string
 *
 * Return: 1 if palindrome, 0 if otherwise
 */

int check_pal(char *s, int a, int l)
{
	if (*(s + a) != *(s + l - 1))
		return (0);
	if (a >= l)
		return (1);
	return (check_pal(s, a + 1, l - 1));
}
