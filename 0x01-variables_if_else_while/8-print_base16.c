#include	<stdio.h>
/**
* main - entry point
* Return: Always 0
*/

int	main(void)
{
	int	digi;
	char	cheta;

	for	(digi	=	48;	digi	<	58;	digi++)
		putchar(digi);
	for	(cheta	=	'a';	cheta	<=	'f';	cheta++)
		putchar(cheta);

	putchar('\n');
	return	(0);
}
