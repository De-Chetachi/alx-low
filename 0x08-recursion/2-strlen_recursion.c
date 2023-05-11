#include "main.h"

/**
* _strlen_recursion - returns the length of a string
* @s: Pointer to the string whose length is to be returned
* Return: Length of the string
*/

int	_strlen_recursion(char *s)
{
	int	sum;

	sum	=	0;

	if	(*s == '\0')
	{
		return	(0);
	}
	sum	=	sum	+	1;
	return	(sum + _strlen_recursion(s + 1));

}
