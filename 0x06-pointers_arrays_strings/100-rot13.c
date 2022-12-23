#include "main.h"
#include <string.h>

/**
* rot13 - This is a description
* @str: Description of parameter str
* Return: un string
*/
char *rot13(char *str)
{
	int i;
	int index = 0;
	char tab[52] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char tab2[52] = {'N','O','P','Q','R','S','T','U','V','W','X','Y','Z','A','B','C','D','E','F','G','H','I','J','K','L','M','n','o','p','q','r','s','t','u','v','w','x','y','z','a','b','c','d','e','f','g','h','i','j','k','l','m'};
	
	for (i = 0;i < (int)(strlen(str)); i++)
	{
		index = 0;
		while (index < 53 && tab[index] != str[i] && str[i] !='\0')
		{
			index++; 
		}
		if (index != (int) strlen(str))
		{
			str[i] = tab2[index];	
		}
		else
		{
			str[i] = str[i];
		}
		index = 0;
	}
	return str;
}
