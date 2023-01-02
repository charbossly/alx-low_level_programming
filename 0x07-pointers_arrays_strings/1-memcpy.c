#include "main.h"

/**
* _memcpy - This is a description
* @dest: Description of parameter dest
* @src: Description of parameter src
* @n: Description of parameter n
* Return: 0
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
