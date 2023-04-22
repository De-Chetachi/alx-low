#include	<stdio.h>
/**
* main - entry point
* Return: Always 0
*/

int	main(void)
{
	int	a;
	int	b;

	for	(a	=	48;	a	<	58;	a++)
	{
		for	(b	=	48;	b	<	58;	b++)
		{
			putchar(a);
			putchar(b);

			if	(a	!=	57	||	b	!=	57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return	(0);
}
