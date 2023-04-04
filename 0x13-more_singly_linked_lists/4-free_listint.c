#include <stdio.h>
#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: Pointer to the head of the list.
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *falt;

	for (; head != NULL; head = falt)
	{
		falt = head->next;
		free(head);
	}
}
