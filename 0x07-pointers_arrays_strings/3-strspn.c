#include "main.h"

/**
* _strspn - This is a description
* @s: Description of parameter s
* @accept: Description of parameter accept
* Return: 0
*/

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	unsigned int count = 0;
	int found = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[j] == accept[i])
			{
				found = 1;
				count++;
			}
		}
		if (found == 0)
		{
			break;
		}
		found = 0;
	}
	return (count);
}
