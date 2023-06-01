#include "lists.h"

/**
* add_node_end -  adds a new node at the end of the link
* @head: Pointer to a pointer which points to the head of the link
* @str: Pointer to the node data
* Return: Pointer to the new node
*/
list_t	*add_node(list_t **head, const char *str)
{
	/*declare the new node*/
	list_t	*node_end;
	/*declare a temporary node to transverse the list*/
	list_t	*node_temp;
	int	i;
	unsigned	int	length	=	0;

	node_temp	=	*head;
	/*allocate memory to the new node*/
	node_end	=	malloc(sizeof(list_t));

	if	(node_end == NULL)
		return	(NULL);
	node_end->str	=	strdup(str);

	/*calculate the length of the string*/
	for	(i = 0; str[i] != '\0'; i++)
		length++;

	node_end->len	=	length;

	/*transverse through the node till the node with null pointer*/
	while	(node_temp->next != NULL)
		node_temp	=	node_temp->next;

	/*change the null pointer to point to the new node*/
	node_temp->next	=	node_end;

	return	(*head);

}
