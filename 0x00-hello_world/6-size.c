#include <stdio.h>
/**
* main - This is a description
* Return: 0
*/
int main(void)
{
printf("Size of a char: %d byte(s)\n
Size of an int: %d byte(s)\n
Size of a long int: %d byte(s)\n
Size of a long long int: %d byte(s)\n
Size of a float: %d byte(s)", sizeof(char), sizeof(int), sizeof(long), sizeof(double), sizeof(float));
return (0);
}