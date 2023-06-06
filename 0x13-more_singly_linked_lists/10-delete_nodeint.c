#include "lists.h"
/**
* delete_nodeint_at_index - inserts newww node at index
* @head: Pointer
* @index: Index
* Return: 1 or 0
*/

int	delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t	*node_temp,	*node_next;
	unsigned	int	i	=	0;

	node_temp	=	*head;

	if	(*head == NULL)
		return	(-1);

	if	(index == 0)
	{
		*head	=	(*head)->next;
		free(node_temp);
		return	(1);
	}

	while	(i < index - 1)
	{
		if	(node_temp == NULL || node_temp->next == NULL)
			return	(-1);
		node_temp	=	node_temp->next;
		i++;
	}
	node_next	=	node_temp->next;
	node_temp->next	=	node_next->next;
	free(node_next);
	return	(1);
}
