#include "dog.h"

/**
 * init_dog - Function that initilizes a variable of type struct dog
 *
 * @d: the dog to be initialized
 * @name: the name of d
 * @age: the age of d
 * @owner: the owner of d
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
