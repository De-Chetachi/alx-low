#include	"main.h"
#include	<string.h>
/**
* puts_half - prints the last half of a string
* @str: The pointer to the  string to be printed
* Return: Null
*/

void	puts_half(char	*str)
{
	int	i;
	int	b;
	int	c;

	b	=	strlen(str);
	c	=	b	-	1;

	if	(c % 2 == 0)
	{
		for	(i = c / 2; i < c; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for	(i = (c - 1) / 2; i < c; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
