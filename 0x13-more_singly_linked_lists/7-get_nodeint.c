#include "lists.h"

/**
* get_nodeint_at_index - returns the nth node of a listint_t linked lis
* @head: Pointer
* @index: The index of the node
* Return: Pointer to the node
*/
listint_t	*get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned	int	i,	length;
	listint_t	*node_temp;

	i	=	0;
	node_temp	=	head;
	length	=	0;

	while	(head != NULL)
	{
		head	=	head->next;
		length	+=	1;
	}

	if	(index > length)
		return	(NULL);

	while	(i < index)
	{
		node_temp	=	node_temp->next;
		i++;
	}
	return	(node_temp);
}
