#include "main.h"
#include <stdlib.h>
#include <stddef.h>


/**
* **alloc_grid - returns a pointer to a 2 dimensional array of integers
* @width: Length of the array
* @height: The number of arrays
* Return: A pointer to the array, or NULL if it fails
*/

int	**alloc_grid(int width, int height)
{
	int	i,	j,	k;
	int	**aptr;

	if	(height <= 0 || width <= 0)
		return	(NULL);

	aptr	=	(int **)	malloc(height * sizeof(int *));

	if	(aptr == NULL)
	{
		free(aptr);
		return	(NULL);
	}
	for	(i = 0; i < height; i++)
	{
		aptr[i]	=	(int *)	malloc(width * sizeof(int));

		if	(aptr[i] == NULL)
		{
			for	(k = i; k >= 0; k--)
				free(aptr[k]);
			free(aptr);
			return	(NULL);
		}
		for	(j = 0; j < width; j++)
		{
			aptr[i][j]	=	0;
		}
	}
	return	(aptr);
}
