#include	<stdio.h>
/**
* main - entry point
* Return: Always 0
*/

int	main(void)
{
	char	a;
	char	b;
	char	c;

	for	(a	=	48;	a	<	58;	a++)
	{
		for	(b	=	49;	b	<	58;	b++)
		{
			for	(c	=	50;	c	<	58;	c++)
			{
				if	(a	>	b	&&	b	>	c)
				{
					putchar(a);
					putchar(b);
					putchar(c);

					if	(a	!=	55	||	b	!=	56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	
	putchar('\n');
	return	(0);
}
