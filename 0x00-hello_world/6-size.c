#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print size various type of compiles
 *
 * Return: 0
 */

int main(void)
{
printf("Size of a char: %c", sizeof(char));
printf("Size of an int: %i", sizeof(int));
printf("Size of a long int: %li", sizeof(long int));
printf("Size of a long long int: %lli", sizeof(long long int));
printf("Size of a float: %f", sizeof(float));
return (0);
}
