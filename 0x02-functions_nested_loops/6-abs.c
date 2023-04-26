#include	<stdio.h>
#include	"main.h"
#include <unistd.h>

/**
* _abs - priints the alphabets in small letters
* @p: The integer to be considered
* Return: If the argument is lower 1, if the argument is not lover 0
*/

int	_abs(int	p)
{
	int	result;

	if	(p	>=	0)
	{
		result	=	p;
	}
	else
	{
		result	=	((-1)*p)
		
	}
	return	(result);
}
