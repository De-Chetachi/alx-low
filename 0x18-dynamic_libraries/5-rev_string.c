#include	"main.h"
#include	<string.h>

/**
* rev_string  - reverses a string
* @s: The pointer to the  string to be reversed
* Return: Null
*/

void	rev_string(char	*s)
{
	int	i;
	int	a;
	char	stemp;

	i	=	0;
	a	=	strlen(s)	-	1;

	while	(i < a)
	{
		stemp	=	s[i];
		s[i]	=	s[a];
		s[a]	=	stemp;
		i++;
		a--;
	}
}
