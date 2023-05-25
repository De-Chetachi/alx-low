#include "variadic_functions.h"

/**
* sum_them_all - returns the sum of all its arguments
* @n: Number of parameters passed to the fxn
* @...: A variable number of parameters whose sum is to be calced
* Return: Sum if successful, 0 otherwise
*/

int	sum_them_all(const unsigned int n, ...)
{
	va_list	para;
	unsigned	int	i,	sum;

	if	(n == 0)
		return	(0);

	sum	=	0;
	va_start(para, n);
	for	(i = 0; i < n; i++)
	{
		sum	=	sum	+	va_arg(para, int);
	}
	va_end(para);
	return	(sum);
}
