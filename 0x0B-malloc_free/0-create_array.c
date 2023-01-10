#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * create_array - the code
 * @size: parameter size
 * @c: parameter c
 * Return: Always 0.
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	s = malloc(sizeof(*s) * size);
	if (s == NULL || size == 0)
	{
		return (NULL);
	}
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
