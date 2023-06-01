#include "lists.h"

/**
* print_list - prints the elements of a list_t list
* @h: Pointer to the head of the list
* Reture: Nunmer of nodes
*/
size_t	print_list(const list_t *h)
{
	/*creat a variable to store the number of nodes*/
	int	i	=	0;

	while	(h != NULL)
	{
		/*If str is NULL, print [0] (nil)*/
		if	(h->str == NULL)
			printf("[0] (nil)\n");

		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h	=	h->next;
		i	=	i	+	1;
	}
	return	(i);
}
