#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Function initializes a variable
 * of type struct dog
 * @d: It takes a pointer to a struct dog
 * (name, age, and owner of the dog)
 *
 * https://openclassrooms.com/fr/courses/
 * 19980-apprenez-a-programmer-en-c/
 * 16119-creez-vos-propres-types-de-variables
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
{
	d->name = name;
	/* ou (*d).name = name */
	d->age = age;
	d->owner = owner;
}
