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
	char newabc[8];
	char abc[36] = "abcdefghijklmnopqrstuvwxyz1234567890"; 	
	srand(time(NULL));
	for (i = 0; i < 12; i++) {
		newabc[i] = abc[rand() % 36];
		printf("%c ", newabc[i]);
	}
	printf("\n"); 
	
	return (0);
}
