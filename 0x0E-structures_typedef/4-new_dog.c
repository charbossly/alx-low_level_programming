#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - check the code
 * @name: parameter 1
 * @age: parameter 1
 * @owner: parameter 1
 * Return: Always 0.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	
	my_dog = malloc(sizeof(dog_t));
	if (!my_dog)
	{
		return (NULL);
	}
	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;
	return  my_dog;
}
