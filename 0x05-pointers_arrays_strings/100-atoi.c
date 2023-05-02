#include "main.h"
/**
* _atoi - converts a string to an integer
* @s: The pointer to the string to be converted 
* Reture: An integer
*/

int	_atoi(char *s)
{
	int	sign	=	1;
	int	num	=	0;
	
	while	(*s == ' ')
	{
		s++;
	}
	
	if	(*s == '-')
	{
		sign	=	-1;
		s++;
	}
	else
	{	
		if (*s == '+')
		{
			s++;
		}
	}
	
	while	(*s >= '0' && *s <= '9')
	{
		num	=	num	*	10	+	(*s - '0');
		s++;
	}
	
	return	sign	*	num;
}
