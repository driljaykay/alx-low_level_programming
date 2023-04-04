#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL.
 * @head: Pointer to a pointer to the head node.
 */

void free_listint2(listint_t **head)
{
	listint_t *present, *fal;

	if (head == NULL)
		return;

	present = *head;
	while (present != NULL)
	{
		present = fal;
		fal = present->next;
		free(present);
	}
	*head = NULL;
}
