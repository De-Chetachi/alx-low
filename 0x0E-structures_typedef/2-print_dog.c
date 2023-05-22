#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
* print_dog - prints a struct dog
* @d: Pointer to the structure
* Return: Void
*/

void	print_dog(struct dog *d)
{
	if	(d != NULL)
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name ? d->name : "(nil)",
				d->age ? d->age : 0, d->owner ? d->owner : "(nil)");
	}
}
