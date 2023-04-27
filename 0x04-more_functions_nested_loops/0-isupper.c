#include "main.h"

/**
* _isupper - checks if an input is an uppercase
* @c: The integer to be considered
* Return: 1 if c is uppercase, 0 otherwise
*/

int	_isupper(int	c)
{
	if	((c	<=	90)	&&	(c	>=	65))
	{
		return	(1);
	}
	else
	{
		return	(0);
	}
}
