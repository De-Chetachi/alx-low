#include "lists.h"

/**
* add_nodeint_end -  adds a new node at the end of the link
* @head: Pointer to a pointer which points to the head of the link
* @n: Date in the node
* Return: Pointer to the new node
*/
listint_t	*add_nodeint_end(listint_t **head, const int n)
{
	/*declare the new node*/
	listint_t	*node_end;
	/*declare a temporary node to transverse the list*/
	listint_t	*node_temp	=	*head;

	/*allocate memory to the new node*/
	node_end	=	malloc(sizeof(listint_t));

	if	(node_end == NULL)
		return	(NULL);

	node_end->n	=	n;
	node_end->next	=	NULL;

	if	(*head == NULL)
	{
		*head	=	node_end;
	}
	/*transverse through the node till the node with null pointer*/
	else
	{
		while	(node_temp->next != NULL)
		node_temp	=	node_temp->next;

		/*change the null pointer to point to the new node*/
		node_temp->next	=	node_end;
	}
	return	(node_end);

}
