#include "main.h"

/**
* _strncat - This is a description
* @dest: Description of parameter s1
* @src: Description of parameter s2
* @n: Description of parameter n
* Return: 0
*/

char *_strncat(char *dest, char *src, int n)
{
	char *result = "";
	int i = 0;

	while (dest[i] != '\0')
	{
		result += dest[i];
		i++;
	}
	i = n - 1;
	while ( src[i] != '\0')
	{
		result += *(src + (n - i + 1)) ;
		i--;
	}

	*dest = *result; 	
	return (result);
}
