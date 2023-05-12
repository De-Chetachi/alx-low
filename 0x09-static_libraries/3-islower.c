#include	<stdio.h>
#include	"main.h"

/**
* _islower - priints the alphabets in small letters
* @c: The integer to be considered
* Return: If the argument is lower 1, if the argument is not lover 0
*/

int	_islower(int	c)
{
	if	(c	>=	97	&&	c	<=	122)
	{
		return	(1);
	}
	else
	{
		return	(0);
	}
}
