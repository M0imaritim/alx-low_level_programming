#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees dog and its associated memory
 * @d: pointer to the dog to be freed
 *
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
