#include	"main.h"
#include	<unistd.h>

/**
* times_table - priints a multiplication table
* Return: Nothing
*/

void	times_table(void)
{
	int	a;

	for	(a	=	0;	a	<=	9;	a++)
	{
		_putchar(0	+	48);
		_putchar(44);
		_putcar('\n');
	}
	for     (a      =       0;      a       <=      9;      a++)
	{
		_putchar(a	+	48);
		_putchar(44);
		_putchar('\n');
	}
	for     (a      =       0;      a       <=      9;      a++)
	{
		_putchar((a	*	2)	+	48);
		_putchar(44);
		_putchar('\n');
	}
	for     (a      =       0;      a       <=      9;      a++)
	{
		_putchar((a	*	3)	+	48);
		_putchar(44);
		_putchar('\n');
	}
	for     (a      =       0;      a       <=      9;      a++)
	{
		_putchar((a     *       4)      +       48);
		_putchar(44);
		_putchar('\n');
	}
	for     (a      =       0;      a       <=      9;      a++)
	{
		_putchar((a     *       5)      +       48);
		_putchar(44);
		_putchar('\n');
	}
	for     (a      =       0;      a       <=      9;      a++)
	{
		_putchar((a     *       6)      +       48);
		_putchar(44);
		_putchar('\n');
	}
	for     (a      =       0;      a       <=      9;      a++)
	{
		_putchar((a     *       7)      +       48);
		_putchar(44);
		_putchar('\n');
	}
	for     (a      =       0;      a       <=      9;      a++)
	{
		_putchar((a     *       8)      +       48);
		_putchar(44);
		_putchar('\n');
	}
	for     (a      =       0;      a       <=      9;      a++)
	{
		_putchar((a     *       9)      +       48);
		_putchar(44);
		_putchar('\n');
	}
}

