#include "lists.h"
/**
* insert_nodeint_at_index - inserts newww node at index
* @head: Pointer
* @idx: Index
* @n: Data
*/

listint_t	*insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t	*prev,	*temp,	*node_index;
	unsigned	int	length,	i	=	0;

	length	=	0;

	while	(*head != NULL)
	{
		*head	=	(*head)->next;
		length	+=	1;
	}

	if	(idx > length)
		return	(NULL);

	temp	=	*head;
	node_index	=	malloc(sizeof(listint_t));
	if	(node_index == NULL)
		return	(NULL);
	node_index->n	=	n;
	while	(i < idx - 1)
	{
		prev	=	temp;
		temp	=	temp->next;
		i++;
	}

	prev->next	=	node_index;
	node_index->next	=	temp;
	return	(node_index);
}
