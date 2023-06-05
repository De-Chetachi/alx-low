#include "lists.h"
/**
* sum_listint - calculates the sum of elements in a list
* @head: Pointer to the head
* Return: The sum
*/
int	sum_listint(listint_t *head)
{
	int	sum	=	0;
	listint_t	*node_temp	=	head;

	if	(head == NULL)
		return	(0);
	while	(node_temp != NULL)
	{
		sum	+=	node_temp->n;
		node_temp	=	node_temp->next;
	}
	return	(sum);
}
