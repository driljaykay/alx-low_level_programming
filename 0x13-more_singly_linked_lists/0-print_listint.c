#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *rep = h;
	size_t noon = 0;

	for (; rep != NULL; rep = rep->next)
	{
		printf("%d\n", rep->n);
		noon++;
	}

	return (noon);
}
