#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - returns a pointer which contains a copy of the string
 * given as a parameter
 * @str: The string to print
 *
 *
 * Return: a pointer to the duplicated string or NULL if insufficient
 * memory was available
 */
char *_strdup(char *str)
{
	int i;
	char *copy;

	if (str == '\0')
	{
		return ('\0');
	}
	i = _strlen(str);
	copy = malloc(sizeof(char) * i + 1);
	if (copy == '\0')
	{
		return ('\0');
	}
	else
	{
		for (i = 0 ; str[i] != '\0' ; i++)
		{
			copy[i] = str[i];
		}
	}
	copy[i] = '\0';
	return (copy);
}
