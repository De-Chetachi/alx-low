#include "lists.h"

/**
* print_dlistint - prints all the elements of a dlistint_t list
* @h: pointer to the first node of list
* Return: the number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (len);
	while (h->next)
	{
		printf("%d\n", h->n);
		len++;
		h = h->next;
	}
	printf("%d\n", h->n);
	len++;

	return (len);
}
