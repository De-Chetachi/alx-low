#include	"main.h"
#include	<stdio.h>
#include	<unistd.h>

/**
* print_numbers - prints integers
* Return: Null
*/

void	print_numbers(void)
{
	int	i;

	for	(i	=	0;	i	<=	9;	i++)
	{
		_putchar(i	+	48);
	}
	_putchar('\n');
}
