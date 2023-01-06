#include "main.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * tall - Description 
 * @a: parameter a
 * @s: parameter s
 * Return: length.
 */
int tall(char *s, int a)
{
	if (!*s)
	{
		return (a);
	}
	else
	{
		if (*s && *s++)
		{
			a = a + 1;
			return tall(s++, a);
		}
		return (a); 
	}
}
/**
* palindrome - This is a description
* @i: Description of parameter i
* @j: Description of parameter j
* Return: boolean
*/

bool palindrome(char *s, int i, int j)
{
	if (*(s + i) == *(s + j - 1))
	{
		if (j == 0)
		{
			return true;
		}
		return palindrome(s, ++i, --j);
	}
	else
	{ 
		return false;
	}	
}
/**
* is_palindrome - This is a description
* @s: Description of parameter s
* Return: integer
*/
int is_palindrome(char *s)
{
	if (palindrome(s, 0, tall(s, 0)) == true)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
