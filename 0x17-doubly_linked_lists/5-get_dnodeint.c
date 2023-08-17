#include "lists.h"

/**
* get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
* @head: pointer to list
* @index: n
* Return: if the node does not exist, return NULL
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	if (!head)
		return (NULL);
	temp = head;
	i = 0;
	while (i < index && temp)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
