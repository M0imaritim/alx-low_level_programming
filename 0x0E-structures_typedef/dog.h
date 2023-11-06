#ifndef DOG_H
#define DOG_H

#include <stdlib.h>

/**
 * struct dog - a structure to tell us the dog's age, name, and its owner
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Description: a simple structure to define the attributes of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
struct dog *create_dog(char *name, float age, char *owner);

#endif
