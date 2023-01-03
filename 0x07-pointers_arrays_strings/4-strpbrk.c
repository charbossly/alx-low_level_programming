#include "main.h"

/**
* _strpbrk - This is a description
* @s: Description of parameter s
* @accept: Description of parameter accept
* Return: 0
*/

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	int found = 0;
	char *p;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == s[j])
			{
				p = &(s[j]);
				found = 1;
				break;
			}
		}
		if (found == 1)
		{
			break;
		}
	}
	return (p);
}
