#include	<stdio.h>
#include	"main.h"

/**
* _isalpha - priints the alphabets in small letters
* @c: The integer to be considered
* Return: If the argument is lower 1, if the argument is not lover 0
*/

int	_isalpha(int	c)
{
	if	((c	>=	97	&&	c	<=	122)	||
			(c	>=	65	&&	c	<=	90))
	{
		return	(1);
	}
	else
	{
		return	(0);
	}
}
