#include "variadic_functions.h"

/**
* print_strings - prints numbers
* @separator: The string to be printed between numbers
* @n: Number of arguments
* @...: Variable number of parameters
* Return: Void
*/

void	print_strings(const char *separator, const unsigned int n, ...)
{
	va_list	elements;
	char	*sptr;
	unsigned	int	i;

	va_start(elements, n);

	for	(i = 0; i < n; i++)
	{
		sptr	=	va_arg(elements, char *);

		if	(sptr == NULL)
			printf("nil");
		else
		{
			printf("%s", sptr);
		}

		if	(i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(elements);
}
