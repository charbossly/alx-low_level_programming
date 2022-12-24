#include "main.h"

/**
* print_number - This is a description
* @n: parameter n
*/
void print_number(int n)
{
	int *p;
	p = &n; 
	_putchar((*p)%10);
}
