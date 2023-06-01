#include "lists.h"

/**
* add_node -  adds a new node at the beginning of the link
* @head: Pointer to a pointer which points to the head of the link
* @str: Pointer to the node data
* Return: Pointer to the new node
*/
list_t	*add_node(list_t **head, const char *str)
{
	/*declare the new node*/
	list_t	*node_begin;
	int	i;
	unsigned	int	length	=	0;

	/*allocate memory to the new node*/
	node_begin	=	malloc(sizeof(list_t));

	if	(node_begin == NULL)
		return	(NULL);
	node_begin->str	=	strdup(str);

	/*calculate the length of the string*/
	for	(i = 0; str[i] != '\0'; i++)
		length++;

	node_begin->len	=	length;
	node_begin->next	=	*head;

	*head	=	node_begin;

	return	(*head);

}
