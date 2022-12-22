#include "main.h"
#include <ctype.h>

/**
* string_toupper- This is a description
* @charS: Description of parameter charS
* Return: un string
*/
char *string_toupper(char *charS)
{
	char LowerC;
	int i = 0;

	while (charS[i] != '\0')
	{
		LowerC = toupper(charS[i]);
		charS[i] = LowerC;
		i++;
	}
	return (charS);
}
