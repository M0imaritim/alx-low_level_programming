#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog and copies name and owner
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: Pointer to the new dog, or NULL if memory allocation fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy, *owner_copy;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}

	name_copy = strdup(name);

	if (name_copy == NULL)
	{
		return (NULL);
	}

	owner_copy = strdup(owner);

	if (owner_copy == NULL)
	{
		return (NULL);
	}

	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return (new_dog);
}
