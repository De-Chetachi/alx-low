#include "lists.h"

/**
* print_listint - prints the elements of the nodes in a listint_t
* @h: Pointer to a list
* Return: Number of nodes in h
*/

size_t	print_listint(const listint_t *h)
{
	/*creat a variable to store the number of nodes*/
	int	i;

	i	=	0;
	while	(h != NULL)
	{
		printf("%d\n", h->n);
		h	=	h->next;
		i	=	i	+	1;
	}
	return	(i);
}
