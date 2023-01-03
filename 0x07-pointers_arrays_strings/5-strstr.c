#include "main.h"

/**
* _strstr - This is a description
* @haystack: Description of parameter haystack
* @needle: Description of parameter needle
* Return: 0
*/

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int count = 0;
	char *p;
	int k = 0;
	int found = 0;

	while (needle[j])
	{
		count++;
	}
	while (haystack[i])
        {
		if (haystack[i] == needle[0])
		{
			for (k = 0; k < count; k++)
			{
				if (haystack[k + i] == needle[k])
				{
					found++;
				}
			}
			if (found == count)
			{
				p = needle;
				break;
			}
		}
		i++;
        }
	return (p);
}
