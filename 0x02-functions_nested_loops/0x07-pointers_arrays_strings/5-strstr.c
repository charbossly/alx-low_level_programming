#include "main.h"

/**
* _strstr - This is a description
* @haystack: Description of parameter haystack
* @needle: Description of parameter needle
* Return: 0
*/

char *_strstr(char *haystack, char *needle)
{
	char *p, *q;

	while (*haystack != '\0')
	{
		q = needle;
		p = haystack;

		while (*haystack != '\0' && *q != '\0' && *haystack == *q)
		{
			haystack++;
			q++;
		}
		if (*q == '\0')
		{
			return (p);
		}
		haystack = p + 1;
	}
	return (0);
}
