#include "main.h"

/**
* _strchr - This is a description
* @s: Description of parameter s
* @c: Description of parameter c
* Return: 0
*/

char *_strchr(char *s, char c)
{
	int i = 0;
	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			p = &(s[i]);
		}
	}
	return (p);
}
