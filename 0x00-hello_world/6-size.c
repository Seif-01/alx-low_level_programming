#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print size various type of compiles
 *
 * Return: 0
 *
 */

int main(void)
{
printf("Size of a char: %c byte(s)\n", sizeof(char));
printf("Size of an int: %i byte(s)\n", sizeof(int));
printf("Size of a long int: %li byte(s)\n", sizeof(long int));
printf("Size of a long long int: %lli byte(s)\n", sizeof(long long int));
printf("Size of a float: %f byte(s)\n", sizeof(float));
return (0);
}
