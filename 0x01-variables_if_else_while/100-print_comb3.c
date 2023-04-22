#include	<stdio.h>
/**
* main - entry point
* Return: Always 0
*/

int	main(void)
{
	int didi;
	int digi;

	for	(didi	=	48;	didi	<	58;	didi++)
	{
		for	(digi	=	49;	digi	<	58;	digi++)
		{
			if	(digi	!=	didi	&&	digi	>	didi)
			{
				putchar(didi);
				putchar(digi);
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return	(0);
}
