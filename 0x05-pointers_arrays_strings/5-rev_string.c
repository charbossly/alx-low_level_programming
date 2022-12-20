#include "main.h"
#include <string.h>

/**
* rev_string - This is a description
* @s: Description of parameter s
*/
void rev_string(char *s)
{
	int i,j = 0;
	int count = 0;
	char temp;
	char *orig ;
	
	orig = s;	
	for(j = 0; j < (count - 1); j++)
	{
		for (i = j + 1; i > 0; i--)
       		{
       			temp = *(orig + i);
			*(orig + i) = *(orig + (i - 1));
			*(orig + (i - 1)) = temp;
       		 }
	}	
}
