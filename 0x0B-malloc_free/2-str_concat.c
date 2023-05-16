#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
* _strlen - calculates the length of a string
* @s: The pointer to the string whose length we want to calculate
* Return: The length of the string
*/

int	_strlen(char	*s)
{
	int	a;
	int	i;

	a	=	0;

	for	(i = 0; s[i] != '\0'; i++)
	{
		a++;
	}
	return	(a);
}

/**
* str_concat -  concatenates two strings
* @s1: The pointer to destination string
* @s2: Pointer to source string
* Return: A pointer to the array, or NULL if it fails
*/

char	*str_concat(char *s1, char *s2)
{
	int	i,	j,	len,	len1,	len2;
	char	*ptr;

	len1	=	_strlen(s1);
	len2	=	_strlen(s2);
	len	=	len1	+	len2;
	ptr	=	(char *)	malloc((len * sizeof(char)) + 1);

	if	(ptr == NULL)
		return	(NULL);

	if	(s1 == NULL)
		s1	=	"";

	if	(s2 == NULL)
		s2	=	"";

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
