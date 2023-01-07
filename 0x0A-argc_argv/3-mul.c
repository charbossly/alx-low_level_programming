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
	int mul = 0;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
