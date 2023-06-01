#include <stdio.h>
#include <stdlib.h>

void	print_bfr_main(void) __attribute__((constructor));

/**
* print_bfr_main - prints a string before the execution of main
* Return: Void
*/

void	print_bfr_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
