#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * tall - the code
 * @s: parameter s
 * Return: Always 0.
 */
int tall(char *s)
{
	int i = 0;

	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}
/**
 * _strdup - the code
 * @str: parameter str
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	char *s;
	int height = 0;
	int i = 0;

	if (!str)
	{
		return (NULL);
	}
	height = tall(str);
	s = malloc(sizeof(*s) * height + 1);
	while (*str)
	{
		s[i] = *str;
		i++;
		str++;
	}
	return (s);
}
