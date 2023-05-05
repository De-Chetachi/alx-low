#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
* leet - encodes a string into 1337
* @s: The pointer to the string
* Return: Pointer to the modified string
*/

char	*leet(char *s)
{
	char	*mapping[300];
	char	*encoded, *encoded_ptr;

	memset(mapping, 0, sizeof(mapping));
	mapping['a']	=	"4";
	mapping['A']	=	"4";
	mapping['e']	=	"3";
	mapping['E']	=	"3";
	mapping['o']	=	"0";
	mapping['O']	=	"0";
	mapping['t']	=	"7";
	mapping['T']	=	"7";
	mapping['l']	=	"1";
	mapping['L']	=	"1";
	encoded	=	malloc(strlen(s) + 1);
	encoded_ptr	=	encoded;
	while	(*s != '\0')
	{
		int	i,	len;
		char	*replacement,	*selected_char;

		replacement	=	mapping[(unsigned char)*s];
		selected_char	=	s;
		if	(replacement != NULL)
		{
			selected_char	=	replacement;
		}
		len	=	strlen(selected_char);
		for	(i = 0; i < len; i++)
		{
			*encoded_ptr = selected_char[i];
			encoded_ptr++;
		}
		s++;
	}
	*encoded_ptr = '\0';
	return	(encoded);
}

