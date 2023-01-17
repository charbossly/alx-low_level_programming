#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - check the code
 * @d: parameter 1
 * Return: Always 0.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
	}
	else
	{
		if (!d->age || !d->owner)
		{
			printf("(nil)");
		}
		else
		{
			if (!d->name)
			{
				printf("Name: (nil)");
			}
			else
			{
				printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
			}
		}
	}
}
