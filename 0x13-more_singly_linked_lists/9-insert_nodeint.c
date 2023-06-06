#include "lists.h"
/**
* insert_nodeint_at_index - inserts newww node at index
* @head: Pointer
* @idx: Index
* @n: Data
* Return: Pointer to the new node, node_index
*/

listint_t	*insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t	*node_temp,	*node_index;
	unsigned	int	i	=	1;

	node_temp	=	*head;
	node_index	=	malloc(sizeof(listint_t));

	if	(node_index == NULL || head == NULL)
		return	(NULL);
	node_index->n	=	n;
	if	(idx == 0)
	{
		node_index->next	=	*head;
		*head	=	node_index;
		return	(node_index);
	}

	while	(i < idx && node_temp !=NULL)
	{
		node_temp	=	node_temp->next;
		i++;
	}
	node_index->next	=	node_temp->next;
	node_temp->next	=	node_index;
	return	(node_index);
}
