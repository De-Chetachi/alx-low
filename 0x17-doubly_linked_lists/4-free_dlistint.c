#include "lists.h"

/**
* free_dlistint - frees a dlistint_t list.
* @head: pointer to list
* Return: VOID
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head->next)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
