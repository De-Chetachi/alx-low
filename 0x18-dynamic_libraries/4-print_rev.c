#include	<string.h>
#include	"main.h"
/**
* print_rev  - prints a string
* @s: The pointer to the  string to be printed
* Return: Null
*/

void	print_rev(char	*s)
{
	int	i;
	int	a;

	a	=	strlen(s);

	for	(i = a - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
