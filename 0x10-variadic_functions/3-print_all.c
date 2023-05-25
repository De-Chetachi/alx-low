#include "variadic_functions.h"

/**
* print_all - prints anything
* @format: List of data type of arguments
* @...: Variable number of parameters
* Return: Void
*/

void	print_all(const char * const format, ...)
{
	char	*sptr;
	char	*gap	=	"";
	int	i;
	va_list elements;

	va_start(elements, format);

	i	=	0;
	if	(format)
	{
		while	(format[i])
		{
			switch	(format[i])
			{
				case	'c':
					printf("%s%c", gap, va_arg(elements, int));
					break;
				case	'i':
					printf("%s%d", gap, va_arg(elements, int));
					break;
				case	'f':
					printf("%s%f", gap, va_arg(elements, double));
					break;
				case	's':
					sptr	=	va_arg(elements, char *);
					if	(!sptr)
						sptr	=	"(nil)";
					printf("%s%s", gap, sptr);
					break;

				default:
					i++;
					continue;
			}
			gap	=	", ";
			i++;
		}
	}
	printf("\n");
	va_end(elements);
}
