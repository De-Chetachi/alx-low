#include "variadic_functions.h"

/**
* print_numbers - prints numbers
* @separator: The string to be printed between numbers
* @n: Number of arguments
* @...: Variable number of parameters
* Return: Void
*/

void	print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list	elements;
	unsigned	int	i;

	va_start(elements, n);

	for	(i = 0; i < n; i++)
	{
		printf("%d", va_arg(elements, int));

		if	(i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(elements);
}
