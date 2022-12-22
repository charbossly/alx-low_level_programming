#include "main.h"

/**
* leet - This is a description
* @charS: Description of parameter charS
* Return: un string
*/
char *leet(char *charS)
{
	int i = 0;
	int o;
	char *tab1 = "aAeEoOtTlL";
	char *tab2 = "43071";

	while (charS[i] != '\0')
	{
		o = 0;
		while (tab1[o] != '\0')
		{
			if (charS[i] == tab1[o])
			{
				charS[i] = tab2[o / 2];
			}
			o++;
		}
		i++;
	}
	return (charS);
}
