#ifndef DOG_H
#define DOG_H

/**
* struct dog - defines a dog stucture
* @name: Dog name
* @owner: Dog owner
* @age: Dog age
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
/**
 * dog_t *new_dog(char *name, float age, char *owner);
*void free_dog(dog_t *d);
*/

#endif
