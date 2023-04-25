#include	<stdio.h>
#include	<unistd.h>

/**
* print_alphabet - priints the alphabets in small letters
* Return: void
*/

void print_alphabet(void)
{
	char	a;

	for	(a	=	97;	a	<	123;	a++)
	{
		putchar(a);
	}
	putchar('\n');
	
	return;
}

/**
* main - entry point
* Return: Always 0
*/

int	main()
{
	void	print_alphabet();

	return	(0);
}
