#include "lists.h"

/**
* pop_listint - deleates the head node
* @head: Pointer to the head of the node
* Return: Data stored in the head ofthe node
*/

int	pop_listint(listint_t **head)
{
	int	n;
	listint	*nodetemp;

	/*set the return value to zero if the node doesn't exist*/
	if	(*head == NULL || head == NULL)
		n	=	0;
	else
	{
		n	=	(*head)->n;
		node_temp	=	(*head)->next
		free(*head);
		*head	=	node_temp;
	}
	/*return the value of the head node or 0*/
	return	(n);
}
