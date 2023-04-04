#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Pointer to a pointer to the head node of the list.
 * @n: Integer value to be stored in the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnate, *lastnate;

	if (head == NULL)
		return (NULL);

	newnate = malloc(sizeof(listint_t));

	if (newnate == NULL)
		return (NULL);

	newnate->n = n;
	newnate->next = NULL;

	if (*head == NULL)
	{
		*head = newnate;
		return (newnate);
	}

	lastnate = *head;
	while (lastnate->next != NULL)
		lastnate = lastnate->next;

	lastnate->next = newnate;
	return (newnate);
}
