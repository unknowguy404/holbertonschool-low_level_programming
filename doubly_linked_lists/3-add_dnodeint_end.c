#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *newOne;

	newOne = malloc(sizeof(dlistint_t));
	if (newOne == NULL)
		return (NULL);

	newOne->n = n;
	newOne->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = newOne;
	}
	else
	{
		*head = newOne;
	}

	newOne->prev = h;

	return (newOne);
}
