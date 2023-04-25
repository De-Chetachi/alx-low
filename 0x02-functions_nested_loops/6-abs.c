#include	<stdio.h>
#include	"main.h"

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
		int	q;
		int	temp;
		int	sqrt;

		q	=	p	*	p;
		sqrt	=	q	/	2;
		temp	=	0;

		while	(sqrt	!=	temp)
		{
			temp	=	sqrt;
			sqrt	=	((q	/	temp)	+	temp)	/	2;
		}
		result	=	sqrt;
	}
	return	(result);
}
