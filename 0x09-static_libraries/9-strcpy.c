#include "main.h"
#include <string.h>

/**
* _strcpy - This is a description
* @dest: Description of parameter dest
* @src: Description of parameter src
* Return: Always char.
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i < (int) strlen(src); i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
