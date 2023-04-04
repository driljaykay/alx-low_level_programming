#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index of a list.
 *
 * @head: Pointer to a pointer to the first node of the list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if succeeded, -1 if failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *prev;
	unsigned int k;

	if (head == NULL || *head == NULL)
		return (-1);

	curr = *head;
	prev = NULL;

	for (k = 0; k < index && curr != NULL; k++)
	{
		prev = curr;
		curr = curr->next;
	}

	if (k != index || curr == NULL)
		return (-1);

	if (prev == NULL)
		*head = curr->next;

	else
		prev->next = curr->next;

	free(curr);
	return (1);
}
