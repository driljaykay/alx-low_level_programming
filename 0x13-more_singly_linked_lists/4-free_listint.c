#include <stdio.h>
#include "lists.h"

/**
 * free_listint - Frees a listint_t linked list.
 * @head: Pointer to the head node of the list.
 */

void free_listint(listint_t *head)
{
	listint_t *falt = head;
	listint_t *node;

	while (head != NULL)
	{
		node = falt->next;
		free(falt);
		falt = node;
	}
}
