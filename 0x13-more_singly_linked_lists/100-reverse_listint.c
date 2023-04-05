#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - reverses linked list
 * @head: pointer to first node of the linked list
 *
 * Return: pointer to first node of reversed linked list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next;

	if (!head || !(*head))
		return (NULL);

	next = (*head)->next;

	do {
		(*head)->next = prev;
		prev = (*head);
		(*head) = next;
		if (next)
			next = next->next;
	} while (*head);
	(*head) = prev;

	return (*head);
}
