#include "main.h"

/**
* _strcmp - compares two strings
* @s1: Pointer to the first string
* @s2: Pointer to the second string
* Return: The difference
*/

int	_strcmp(char	*s1,	char	*s2)
{
	int	i;

	for	(i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if	(*s1[i] == *s2[i])
		{
			i++;
		}
	}

	return	(*s1 - *s2);
}
