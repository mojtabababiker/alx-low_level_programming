#include "dog.h"

/**
 * free_dog - free struct elemnts and the struct itself
 * @d: pointer to struct
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
