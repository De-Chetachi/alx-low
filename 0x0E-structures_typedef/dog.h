#ifndef DOG_H
#define DOG_H

/**
* struct dog - Defines a dog stucture
* @name: Dog name
* @owner: Dog owner
* @age: Dog age
*
* Description: Define a new type struct dog with the following elements
*/

struct	dog
{
	char	*name;
	float	age;
	char	*owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
