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
	char	*encoded;
	int	len,	i;
	len	=	strlen(str);
	encoded	=	malloc((len + 1)	*	sizeof(char));
	
	if	(encoded == NULL)
		return NULL;
	for	(i = 0; i < len; i++)
	{
		int	pos,	rot13_pos;
		char	rot13_char;
		if (isalpha(str[i]))
		{
			pos	=	tolower(str[i]) - 'a';
			rot13_pos	=	(pos + 13) % 26;
			rot13_char	=	rot13_pos	+	'a'	+
				(isupper(str[i]) ? 'A' - 'a' : 0);
			encoded[i]	=	rot13_char;
		}
		else
		{
			encoded[i] = str[i];
		}
	}
	encoded[len] = '\0';
	return encoded;
}
