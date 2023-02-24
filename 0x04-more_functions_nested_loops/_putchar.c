#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the characterc to stdout
 * @c: character to print
 *
 * Return: On success 1
 * On error, 1 is returne, and error is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
