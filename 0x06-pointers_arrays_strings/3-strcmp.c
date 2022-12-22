#include "main.h"
#include <ctype.h>

/**
* _strcmp - This is a description
* @s1: Description of parameter s1
* @s2: Description of parameter s2
* Return: 0
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
