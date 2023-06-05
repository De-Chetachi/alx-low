#include "lists.h"

/**
* free_listint - frees a linked list
* @head: Pointer to the linked list
* Return: Void
*/
void	free_listint(listint_t *head)
{
	/*declare a variable to transverse the linked list*/
	listint_t *node_temp;

	while	(head != NULL)
	{
		node_temp = head->next;
		free(head);
		head = node_temp;
	}


}
