#include	<stdio.h>
/**
* main -entry point
* Return: Always 0
*/
int	main(void)
{
	int digi;

	for	(digi	=	48;	digi	<	58;	digi++)
	{
		putchar(digi);
		if	(digi	!=	57)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return	(0);
}
