#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - returns a pointer to a 2 dimensional array of integers
 * @b: height of the array
 *
 * Return: a pointer to a 2 dimensional array of integers
 */
void *malloc_checked(unsigned int b)
{
	int *a;

	a = malloc(b);
	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
