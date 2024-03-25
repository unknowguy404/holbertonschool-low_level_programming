#include "lists.h"
/**
 * list_len - the length of the list
 * @h: pointer to the head of the list
 * Return: the length of the list
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
