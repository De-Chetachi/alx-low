#include "lists.h"

/**
* listint_len - calculates the number of element in a node
* @h: Pointer to the head of the list
* Return: The number of elements in the node
*/

size_t	listint_len(const listint_t *h)
{
	/*declare a variable to store the number of elements*/
	int	list_ele	=	0;

	/*loop through the the elements of the node*/
	while	(h != NULL)
	{
		h	=	h->next;
		list_ele	+=	1;
	}
	return	(list_ele);
}
