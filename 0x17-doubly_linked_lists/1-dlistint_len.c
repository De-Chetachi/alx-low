#include "lists.h"

/**
* dlistint_len - returns the number of elements in a linked dlistint_t list.
* @h: pointer to the first node of list
* Return: the number of nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (len);
	while (h->next)
	{
		len++;
		h = h->next;
	}
	len++;

	return (len);
}
