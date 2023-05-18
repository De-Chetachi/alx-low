#include "main.h"
#include <stdlib.h>
#include <stddef.h>


/**
* _calloc - returns a pointer to a 2 dimensional array of integers
* @size: Length of the array
* @nmemb: The number of arrays
* Return: A pointer to the array, or NULL if it fails
*/

void	*_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned	int	i;
	char	*ptr;

	if	(nmemb == 0 || size == 0)
		return	(NULL);

	ptr	=	malloc(size * nmemb);

	if	(ptr == NULL)
	{
		free(ptr);
		return	(NULL);
	}
	for	(i = 0; i < nmemb; i++)
	{
		ptr[i]	=	0;
	}
	return	(ptr);
}
