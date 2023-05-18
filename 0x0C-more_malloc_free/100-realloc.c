#include "main.h"
#include <stdlib.h>
#include <stddef.h>


/**
* _realloc - reallocates a memory block using malloc and free
* @old_size: Size of the previous memory block
* @ptr: The pointer to the previous memory block
* @new_size: Size of the new block
* Return: A pointer to the array, or NULL if it fails
*/

void	*_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned	int	i;
	char	*aptr;

	if	(new_size == old_size)
		return	(ptr);
	aptr	=	malloc(new_size);
	if	(aptr == NULL)
		return	(NULL);
	if	(new_size > old_size)
	{
		for	(i = 0; i < old_size; i++)
			aptr[i]	=	((char *) ptr)[i];
		free(ptr);
	}
	if	(old_size > new_size)
	{
		for	(i = 0; i < new_size; i++)
			aptr[i]	=	((char *) ptr)[i];
		free(ptr);
	}

	if	(ptr !=NULL && new_size == 0)
	{
		free(ptr);
		return	(NULL);
	}
	return	(aptr);
}
