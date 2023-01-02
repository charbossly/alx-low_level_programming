#include "main.h"

/**
* _memset - This is a description
* @s: Description of parameter s
* @b: Description of parameter b
* @n: Description of parameter n
* Return: 0
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
