#include <stdio.h>
/**
* main - entry point.
* Return: Always 0
*/

int	main(void)
{
	char	cheta;

	for	(cheta	=	'a';	cheta	<=	'z';	cheta++)
	{
		if	((cheta	!=	'q')	&&	(cheta	!=	'e'))
			putchar(cheta);
	}

	putchar('\n');
	return (0);
}
