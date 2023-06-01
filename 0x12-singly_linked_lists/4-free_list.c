#include "lists.h"

/**
* free_list - frees a linked list
* @head: Pointer to the linked list
* Return: Void
*/
void	free_list(list_t *head)
{
	/*declare a variable to transverse the linked list*/
	list_t *node_temp	=	head;

	while	(node_temp	!= NULL)
	{
		free(node_temp->str);
		free(node_temp);
		node_temp	=	node_temp->next;
	}

}
