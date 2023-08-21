#include	<string.h>
#include	"main.h"
/**
* puts2  - prints every other character of a string
* @str: The pointer to the  string to be printed
* Return: Null
*/

void	puts2(char	*str)
{
	int	i;

	for	(i = 0; str[i] != '\0'; i++)
	{
		if	(i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
