#include "lists.h"

/**
* insert_dnodeint_at_index -  inserts a new node at a given position.
* @h: pointer to list
* @idx: index to be inserted at
* @n: node data
* Return: new node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *temp, *node, *prev;

	if (!(*h) && idx > 0)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->prev = NULL;
	node->next = NULL;

	temp = *h;
	prev = NULL;
	i = 0;
	while (temp)
	{
		if (i == idx)
		{
			prev->next = node;
			temp->prev = node;
			node->prev = prev;
			node->next = temp;
			return (node);
		}
		prev = temp;
		temp = temp->next;
		i++;
	}
	free(node);
		if (i == idx)
			return (add_dnodeint_end(h, n));
	return (NULL);
}
