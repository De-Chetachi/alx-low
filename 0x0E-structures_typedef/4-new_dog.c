#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
* _strlen - calculates the length of a string
* @s: The pointer to the string whose length we want to calculate
* Return: The length of the string
*/

int	_strlen(char	*s)
{
	int	a;
	int	i;

	a	=	0;

	for	(i = 0; s[i] != '\0'; i++)
	{
		a++;
	}
	return	(a);
}

/**
* _strcpy - copyies the string in the address pointed
* to by the second int to the first int
* @dest: First int
* @src: Second int
* Return: The pointer to dest
*/

char	*_strcpy(char *dest, char *src)
{
	char	*pDest = dest;

	while	(*src != '\0')
	{
		*pDest++	=	*src++;
	}
	*pDest	=	'\0';
	return	(dest);
}

/**
* new_dog - initializes a dog structure
* @name: Name of the dog
* @age: Age of the dog
* @owner: Owner of the dog
* Return: Void
*/

dog_t	*new_dog(char *name, float age, char *owner)
{
	int	namelength, ownerlen;
	dog_t	*doggy;

	namelength	=	_strlen(name)	+	1;
	ownerlen	=	_strlen(owner)	+	1;
	doggy	=	malloc(sizeof(dog_t));
	if	(doggy == NULL)
		return	(NULL);

	doggy->name = malloc(sizeof(char) * namelength);
	if	(doggy->name == NULL)
	{
		free(doggy);
		return	(NULL);
	}
	doggy->owner	=	malloc(sizeof(char) * ownerlen);
	if	(doggy->owner == NULL)
	{
		free(doggy);
		free(doggy->name);
		return	(NULL);
	}
	_strcpy(doggy->name, name);
	_strcpy(doggy->owner, owner);
	doggy->age	=	age;

	return	(doggy);
}
