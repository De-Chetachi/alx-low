#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * rot13 - encodes a string using ROT13 substitution cipher
 * @str: the string to encode
 *
 * Return: a pointer to the encoded string
 */
char	*rot13(char *str)
{
	int	i;

	for	(i = 0; str[i] != '\0'; i++)
	{
		char	pen;

		if	(islower(str[i]))
		{
			if	(((str[i] - 'a') / 13 == 0) || ((str[i] - 'A') == 13))
			{
				pen	=	str[i]	+	13;
			}
			else	if	((str[i] - 'a') / 13 >= 1)
			{
				pen	=	str[i]	-	13;
			}
			str[i]	=	pen;
		}
		else	if	(isupper(str[i]))
		{
			if	(((str[i] - 'A') / 13 == 0) || ((str[i] - 'A') == 13))
			{
				pen	=	str[i]	+	13;
			}
			else	if	((str[i] - 'A') / 13 >= 1)
			{
				pen	=	str[i]	-	13;
			}
			str[i]	=	pen;
		}
		else
		{
			str[i]	=	str[i];
		}
	}
	return	(str);
}
