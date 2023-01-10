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

	while(*s)
	{
		i++;
		s++;
	}
	  
        return (i);
}
/**
 * str_concat - the code
 * @s1: parameter s1
 * @s2: parameter s2
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int height =0;
	int i = 0;
	int j = 0;

	height = tall(s1) + tall(s2) ;
	s = malloc(sizeof(*s) * height + 1);
	while(*s1)
	{
		s[i] = *s1;
		i++;
		s1++;
	}
	while(*s2)
	{
		s[i + j] = *s2;
		j++;
		s2++;
	}
	s[i + j] = '\0';
	return (s);
}
