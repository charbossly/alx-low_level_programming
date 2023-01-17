#include "dog.h"

/**
 * init_dog - check the code
 * @d: parameter 1
 * @name: parameter 1
 * @age: parameter 1
 * @owner: parameter 1
 * Return: Always 0.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
