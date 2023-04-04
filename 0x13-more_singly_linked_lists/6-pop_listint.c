#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list and returns its data
 * @head: pointer to the pointer to the head node of the linked list
 * Return: the data of the deleted head node or 0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *deth;
	int redata;

	/* Check if the linked list is empty */
	if (*head == NULL)
		return (0);

	/* Store the data of the head node */
	redata = (*head)->n;

	/* Delete the head node */
	deth = *head;
	*head = (*head)->next;
	free(deth);

	return (redata);
}
