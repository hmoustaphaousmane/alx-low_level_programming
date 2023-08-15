#include "dog.h"

/**
 * free_dog - Fuction that frees a dog
 *
 * @d: the dog to be freed
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
