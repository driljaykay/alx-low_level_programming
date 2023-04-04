#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: value of the new node
 *
 * Return: address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *prest;
	unsigned int gp;

	if (head == NULL)
		return (NULL);

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	prest = *head;

	for (gp = 0; gp < idx - 1 && prest != NULL; gp++)
		prest = prest->next;

	if (prest == NULL)
	{
		free(newnode);
		return (NULL);
	}

	newnode->next = prest->next;
	prest->next = newnode;

	return (newnode);
}
