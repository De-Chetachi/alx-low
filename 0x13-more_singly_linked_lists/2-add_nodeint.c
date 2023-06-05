#include "lists.h"

/**
* add_nodeint -  adds a new node at the beginning of the link
* @head: Pointer to a pointer which points to the head of the link
* @n: Data of new node
* Return: Pointer to the new node
*/
listint_t	*add_nodeint(listint_t **head, const int n)
{
	/*declare the new node*/
	listint_t	*node_begin;

	/*allocate memory to the new node*/
	node_begin	=	malloc(sizeof(listint_t));

	if	(node_begin == NULL)
		return	(NULL);

	node_begin->n	=	n;

	node_begin->next	=	*head;

	/*link the new node to the head*/
	*head	=	node_begin;

	return	(*head);

}
