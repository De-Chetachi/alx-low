#include "lists.h"

/**
* add_dnodeint_end - adds a new node at the end of a dlistint_t list
* @head: pointer to list head
* @n: node data
* Return: the address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *temp;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->prev = NULL;
	node->next = NULL;

	if (!(*head))
		*head = node;
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = node;
		node->prev = temp;
	}
	return (node);
}
