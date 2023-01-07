#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * main - check the code
 * @argc: parameter argc
 * @argv: parameter argv
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int reste = 0;

	if (argc == 2)
	{
		if (atoi(argv[1]) < 0)
		{
			(void)i;
			(void)reste;
			printf("0\n");
		}
		else
		{
			reste = atoi(argv[1]);
			i = (reste / 25) + ((reste % 25) / 10);
			reste = ((reste % 25) % 10);
			i += (reste / 5) + ((reste % 5) / 2);
			reste = (reste % 5) % 2;
			i += reste;
			printf("%d\n", i);
		}
		return (0);
	}
	else
	{
		(void)i;
		(void)reste;
		printf("Error\n");
		return (1);
	}
}
