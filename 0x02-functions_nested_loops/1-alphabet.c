#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_alphabet();

int main(void)
{
print_alphabet();
return (0);
}

void print_alphabet()
{
        char n;

        for (n = 'a'; n <= 'z'; n++)
        {
        putchar(n);
        }
        putchar('\n');
}
