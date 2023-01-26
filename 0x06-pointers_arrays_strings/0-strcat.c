#include "main.h"

/**
* _strcat  - This is a description
* @dest: Description of parameter s1
* @src: Description of parameter s2
* Return: 0
*/

char *_strcat(char *dest, char *src)
{
	char result[15];
	int i = 0;
	int p = 0;

	while (dest[i] != '\0')
	{
		result[p] = dest[i];
		i++;
	}
	p = i;
	i = 0;
	while (src[i] != '\0')
	{
		result[p] = src[i];
		i++;
		p++;
	}
	i = 0;
	while (dest[i] != '\0')
	{
		dest[i] = result[i];
		i++;
	}
	return (dest);
}
