#include	<stdio.h>
#include	<unistd.h>
/**
* main - entry point
* Return: Always 0
*/

int	main(void)
{
	sayputchar();

	return	(0);
}

/**
* sayputchar - prints -putchar to the standard output
* Return: Void
*/
void	sayputchar()
{
	putchar(95);
	putchar(112);
	putchar(117);
	putchar(116);
	putchar(99);
	putchar(104);
	putchar(97);
	putchar(114);
	putchar('\n');
}
