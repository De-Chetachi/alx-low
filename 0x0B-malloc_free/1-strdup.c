#include "main.h"
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
* _strdup -  returns a pointer to a newly allocated space in memory
* which contains a copy of the string given as a parameter
* @str: The pointer to the string
* Return: A pointer to the array, or NULL if it fails
*/

char	*_strdup(char *str)
{
	unsigned	int	i,	len;
	char	*ptr;

	if	(str == NULL)
		return	(NULL);

	len	=	_strlen(str);

	ptr	=	(char *)	malloc((len * sizeof(char)) + 2);
	if	(ptr == NULL)
	{
		return	(NULL);
	}
	for	(i = 0; i <= len; i++)
	{
		ptr[i]	=	str[i];
	}
	return	(ptr);
}
