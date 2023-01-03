#include "main.h"

/**
* _strchr - This is a description
* @s: Description of parameter s
* @c: Description of parameter c
* Return: 0
*/

char *_strchr(char *s, char c)
{
	char *p;

	while (*s != '\0')
	{
		if (*s == c)
		{
			p = s;
			return (p);
		}
		++s;
	}
	if (*s == c)
	{
		return (s);
	}
	return ('\0');
}
