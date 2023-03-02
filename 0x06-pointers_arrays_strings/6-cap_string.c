#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @str: string to be capitalized
 *
 * Return: pointer to changed string.
 */

char *cap_string(char *str)
{
	int k = 0;

	while (str[k])
	{
		while (!(str[k] >= 'a' && str[k] <= 'z'))
			k++;
		if (str[k - 1] == ' ' ||
				str[k - 1] == '\t' ||
				str[k - 1] == '\n' ||
				str[k - 1] == ',' ||
				str[k - 1] == ';' ||
				str[k - 1] == '.' ||
				str[k - 1] == '!' ||
				str[k - 1] == '?' ||
				str[k - 1] == '"' ||
				str[k - 1] == '(' ||
				str[k - 1] == ')' ||
				str[k - 1] == '{' ||
				str[k - 1] == '}' ||
				k == 0)
			str[k] -= 32;
		k++;
	}
	return (str);
}
