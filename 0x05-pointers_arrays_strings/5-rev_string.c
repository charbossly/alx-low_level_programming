#include "main.h"

/**
* rev_string - This is a description
* @s: Description of parameter s
*/
void rev_string(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		s[strlen(s) - i] = *(s + i));
	}
}
