#include "lists.h"
/**
 * print_dlistint: print all elements of a list
 * @dlistint_t: list
 * @h: head of the list
 * Return: the number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);
	i = 0;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
