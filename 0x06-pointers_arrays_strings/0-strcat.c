#include "main.h"

/**
* _strcat  - This is a description
* @dest: Description of parameter s1
* @src: Description of parameter s2
* Return: 0
*/

char *_strcat(char *dest, char *src)
{
	char *result = "";
	int i = 0;

	while (dest[i] != '\0')
	{
		result += dest[i];
		i++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		result += src[i];
		i++;
	}
	return (result);
}
