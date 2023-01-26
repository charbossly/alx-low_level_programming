#include "main.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * nbretotal - Description
 * @s2: parameter s2
 * @a: parameter a
 * Return: length.
 */
int nbretotal(char *s2, int a)
{
	if (*s2)
	{
		return nbretotal(s2++, a++);
	}
	return (a);
}
/**
 * findnext - Description
 * @s: parameter s
 * @i: parameter i
 * Return: length.
 */
char findnext(char *s, int i)
{
	if (*s)
	{
		if(*s == '*')
		{
			return findnext(s++, i++);
		}
		return s[i];
	}
	else
	{
		return ('\0');
	}
}
/**
 * suivantchar - Description
 * @s: parameter s
 * @i: parameter i
 * Return: length.
 */
char suivantchar(char *s, int i)
{
	if (*s)
	{
		return s[i];
	}
	else
	{
		return ('\0');
	}
}

/**
* wdp - This is a description
* @s1: Description of parameter s1
* @s2: Description of parameter s2
* @a: Description of parameter a
* @total: Description of parameter total
* Return: integer
*/

int wdp(char *s1, char *s2, int a, int total)
{
	if (*s1 && *s2)
	{
		if (suivantchar(s1, a) == findnext(s2, a))
		{
			return (wdp(s1++, s2++, a++, total));
		}
		else
		{
			return (wdp(s1++, s2, a, total));
		}
		return (1);
	}
	else
	{
		if (total == a)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
/**
* wildcmp - This is a description
* @s1: Description of parameter s1
* @s2: Description of parameter s1
* Return: integer
*/
int wildcmp(char *s1, char *s2)
{
	printf("%c", s1[0]);
	return s2[0];
	/*return (wdp(s1, s2, 0, nbretotal(s2, 0)));*/
}
