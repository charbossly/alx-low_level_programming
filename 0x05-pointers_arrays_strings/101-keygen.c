#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - This is a description
* Return: 0 Always
*/
int main(void) {
	int i;
	char abc[26]="abcdefghijklmnopqrstuvwxyz";
	char newabc[8];

	srand(time(NULL));
	for (i = 0; i < 12; ++i) {
		newabc[i] = abc[rand() % (sizeof(abc) - 1)];
		printf("%c ", newabc[i]);
	}
	newabc[12] = 0; 
	
	return 0;
}
