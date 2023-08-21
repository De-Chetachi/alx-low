#include	"main.h"
#include <ctype.h>

/**
* string_toupper - changes small letters to capital letter
* @s: Pointer to the string to be modified
* Return: Pointer to the modified string
*/

char	*string_toupper(char *s)
{
	int	i;

	for	(i = 0; s[i] != '\0'; i++)
	{
		if	(islower(s[i]))
		{
			s[i]	= toupper(s[i]);
		}
	}
	return	(s);
}
