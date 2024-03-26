#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head of the list
 * @idx: index of the new node
 * @n: value of the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *head = *h;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = head;
		new->prev = NULL;
		if (head)
			head->prev = new;
		*h = new;
		return (new);
	}
	while (head && i < idx - 1)
	{
		head = head->next;
		i++;
	}
	if (!head)
	{
		free(new);
		return (NULL);
	}
	new->next = head->next;
	new->prev = head;
	if (head->next)
		head->next->prev = new;
	head->next = new;
	return (new);
}
