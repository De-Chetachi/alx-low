#include	<stdio.h>
#include	"main.h"

/**
* print_alphabet_x10 - priints the alphabets in small letters
* Return: void
*/

void print_alphabet_x10(void)
{
	int	i;
	i	=	0;

	while	(i	<	10)
	{

		char	a;

		for	(a	=	97;	a	<	123;	a++)
		{
			putchar(a);
		}

		i++;
		putchar('\n');
	}

	putchar('\n');
}
