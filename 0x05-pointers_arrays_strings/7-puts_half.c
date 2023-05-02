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

	b	=	strlen(str);

	if	(b % 2 == 0)
	{
		for	(i = b / 2; i < b; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for	(i = (b - 1) / 2; i < b; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
