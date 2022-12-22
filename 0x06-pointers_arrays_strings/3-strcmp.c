#include "main.h"
#include <ctype.h>

/**
* cap_string - This is a description
* @charS: Description of parameter charS
* Return: un string
*/
char *cap_string(char *charS)
{
	char LowerC;
	int i = 0;

	while (charS[i] != '\0')
	{
		if (charS[i] == ' ' || charS[i] == '\n' || charS[i] == '\t')
		{
			LowerC = toupper(charS[i + 1]);
			charS[i + 1] = LowerC;
		}
		if (charS[i] == ',' || charS[i] == ';' || charS[i] == '.' || charS[i] == '!')
		{
			LowerC = toupper(charS[i + 1]);
			charS[i + 1] = LowerC;
		}
		if (charS[i] == '\"' || charS[i] == '(' || charS[i] == ')' || charS[i] == '?' || charS[i] == '{' || charS[i] == '}')
		{
			LowerC = toupper(charS[i + 1]);
			charS[i + 1] = LowerC;
		}


		i++;
	}
	return (charS);
}
