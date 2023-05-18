#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* string_nconcat -  concatenates two strings
* @s1: The pointer to destination string
* @s2: Pointer to source string
* @n: The first number of bytes to concatenate
* Return: A pointer to the array, or NULL if it fails
*/

char	*string_nconcat(char *s1, char *s2, unsigned int n)
{
	int	i,	j,	k,	len,	len1;
	char	*ptr;

	if	(s1 == NULL)
		s1	=	"";
	if	(s2 == NULL)
		s2	=	"";
	k	=	0;
	len1	=	0;

	while	(s1[k])
	{
		len1++;
	}
	len	=	len1	+	n;
	ptr	=	(char *)	malloc((len * sizeof(char)) + 1);

	if	(ptr == NULL)
		return	(NULL);

	j	=	0;

	for	(i = 0; i < len; i++)
	{
		if	(i <= len1)
			ptr[i]	=	s1[i];
		if	(i	>= len1)
		{
			ptr[i]	=	s2[j];
			j++;
		}
	}
	ptr[len]	=	'\0';
	return	(ptr);
}
