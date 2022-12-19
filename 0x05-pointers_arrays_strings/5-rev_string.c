#include "main.h"

/**
* rev_string - This is a description
* @s: Description of parameter s
*/
void rev_string(char *s)
{
	int i;

	for ( i = strlen(s); i < 0; i--)
	{
		s[strlen(s) - i] = i*(s+i));
	}
}
