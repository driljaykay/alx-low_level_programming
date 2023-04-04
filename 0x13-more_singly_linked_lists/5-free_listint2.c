#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * @head: pointer to pointer to head of list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *fal;
	unsigned int k;

	if (head == NULL)
		return;

	for (k = 0; *head != NULL; k++)
	{
		fal = *head;
		*head = (*head)->next;
		free(fal);
	}
	*head = NULL;
}
