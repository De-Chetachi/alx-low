#include "lists.h"

/**
* add_dnodeint - adds a new node at the beginning of a dlistint_t list.
* @head: pointer to the head
* @n: integer data of the dlistint_t struct
* Return: the address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->prev = NULL;
	node->next = NULL;
	if ((*head) == NULL)
	{
		*head = node;
		return (node);
	}
	else
	{
		node->next = *head;
		(*head)->prev = node;
		*head = node;
		return (node);
	}
}
