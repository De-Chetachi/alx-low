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
* _strcat - concartenates two strings
* @dest: Pointer to the first string
* @src: Pointer to the second string
* Return: Pointer to the resulting string
*/

char	*_strcat(char	*dest,	char	*src)
{
	int	i;
	int	j;

	if	(dest == NULL)
		dest	=	"";
	if	(src == NULL)
		src 	=	"";

	for	(i = 0; dest[i] != '\0'; i++)
		;
	for	(j = 0; src[j] != '\0'; j++)
	{
		dest[i]	=	src[j];
		i++;
	}
	dest[i]	=	'\0';

	return	(dest);
}

/**
* str_concat -  concatenates two strings
* @s1: The pointer to destination string
* @s2: Pointer to source string
* Return: A pointer to the array, or NULL if it fails
*/

char	*str_concat(char *s1, char *s2)
{
	int	i,	len;
	char	*str,	*ptr;

	str	=	_strcat(s1, s2);
	len	=	_strlen(str);
	ptr	=	(char *)	malloc((len * sizeof(char)) + 1);

	if	(ptr == NULL)
		return	(NULL);
	for	(i = 0; i <= len; i++)
	{
		ptr[i]	=	str[i];
	}
	return	(ptr);
}
