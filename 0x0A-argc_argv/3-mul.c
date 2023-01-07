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
	int mul = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d", mul);
		printf("\n");
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
