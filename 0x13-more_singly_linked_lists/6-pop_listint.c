#include "lists.h"

/**
* pop_listint - deleates the head node
* @head pointer to the head of the node
* Return: Data stored in the head ofthe node
*/

int	pop_listint(listint_t **head)
{
	int	n;

	if	(*head == NULL)
		n	=	0;
	else
	{
		n	=	head->n;
		*head	=	NULL;
		free(*head);
	}
	free(head)
	return	(n);
}
