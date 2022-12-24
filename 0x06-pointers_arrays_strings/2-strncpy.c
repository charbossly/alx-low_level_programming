#include "main.h"

/**
* _strncpy - This is a description
* @dest: Description of parameter dest
* @src: Description of parameter src
* @n: Description of parameter n
* Return: string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = src[i];
	}
	*(dest + i) = '\0';
	return (dest);
}
