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
	int go = 0;
	int match = 0;

	while (needle[j] != '\0')
	{
		count++;
	}
	for (j = 0; needle[j] != '\0'; j++)
	{
		for (i = 0; haystack[i] != '\0'; i++)
		{
			if (needle[j] == haystack[i])
			{
				match = 0;
				while (match <= count)
				{
					if (needle[j + match] == haystack[i + match])
					{
						go = 1;
					}
					else
					{
						go = 0;
						match = 0;
						break;
					}
					match++;
				}
				if (go == 1)
				{
					p = &needle[0];
					break;
				}

			}
		}
	}
	return (p);
}
