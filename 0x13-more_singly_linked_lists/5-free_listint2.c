#include "lists.h"

/**
* free_listint2 - frees a linked list
* @head: Pointer to the linked list
* Return: Void
*/
void	free_listint2(listint_t **head)
{
	/*declare a variable to transverse the linked list*/
	listint_t *node_temp;

	node_temp	=	*head;

	/*stop if head is null*/
	if	(head == NULL)
		return;

	/*free each node while traversing through it*/
	while	(*head != NULL)
	{
		if	(*head == NULL)
			return;
		node_temp = (*head)->next;
		free(*head);
		*head = node_temp;
	}

	/*set head to null*/
	*head	=	NULL;
}
