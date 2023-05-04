#include "main.h"
#include <ctype.h>

/**
* cap_string - capitalizes each word in a string
* @s: The pointer to the string
* Return: Pointer to the modified string
*/

char	*cap_string(char *s)
{
	int	i;

	s[0]	=	toupper(s[0]);
	for	(i = 1; s[i] != '\0'; i++)
	{
		if	(isspace(s[i - 1]))
		{
			s[i]	=	toupper(s[i]);
		}
	}
	return	(s);
}
