#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints s struct dog
 * @d: poimter to structure representing dog
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
