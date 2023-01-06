#include "main.h"

/**
* _strpbrk - This is a description
* @s: Description of parameter s
* @accept: Description of parameter accept
* Return: 0
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (j = 0; *(s + j); j++)
	{
		for (i = 0; *(accept + i); i++)
		{
			if (*(accept + i) == *(s + j))
			{
				break;
			}
		}
		if (*(accept + i) != '\0')
		{
			return (s + j);
		}
	}
	return (0);
}
