#include "main.h"

/**
* print_rev  - prints a string
* @s: The pointer to the  string to be printed
* Return: Null
*/

void	print_rev(char	*s)
{
	int	i;
	int	a;

	while	(s)
		a++;

	for	(i = a - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}

/**
* print_binary - prints the binary representation of an integer
* @n: The integer
* Return: Void
*/
void print_binary(unsigned long int n)
{
	int k, bit_status, bit_status_check = 0;

	if	(n == 0)
	{
		_putchar('0');
		return;
	}

	for	(k = 63; k >= 0; k--)
	{
		bit_status = (n >> k) & 1;

		if	(bit_status == 1)
			bit_status_check = 1;
		if	(bit_status_check)
			_putchar(bit_status + '0');
	}
}
