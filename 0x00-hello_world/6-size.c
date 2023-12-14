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
printf("Size of a char: %c\n byte(s)", sizeof(char));
printf("Size of an int: %i\n byte(s)", sizeof(int));
printf("Size of a long int: %li\n byte(s)", sizeof(long int));
printf("Size of a long long int: %lli\n byte(s)", sizeof(long long int));
printf("Size of a float: %f\n byte(s)", sizeof(float));
return (0);
}
