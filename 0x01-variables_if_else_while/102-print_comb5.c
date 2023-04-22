#include	<stdio.h>
/**
* main - entry point
* Return: Always 0
*/

int	main(void)
{
	int	a;
	int	b;

	for	(a	=	0;	a	<	100;	a++)
	{
		for	(b	=	0;	b	<	100;	b++)
		{
			if	(a	<	b)
			{
				putchar((i	/	10)	+	48);
				putchar((i	%	10)	+	48);
				putchar(' ');
				putchar((j	/	10)	+	48);
				putchar((j	%	10)	+	48);

				if	(i	!=	98	||	j	!=	99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return	(0);
}
