#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
* init_dog - initializes a dog structure
* @d: Pointer to the structure
* @name: Name of the dog
* @age: Age of the dog
* @owner: Owner of the dog
* Return: Void
*/

void	init_dog(struct dog *d, char *name, float age, char *owner)
{
	if	(d == NULL)
		d	=	malloc(sizeof(struct dog));
	d->name	=	name;
	d->age	=	age;
	d->owner	=	owner;
}
