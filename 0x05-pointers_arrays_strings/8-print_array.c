#include "main.h"
#include <stdio.h>

/**
* print_array - a function that prints n elements of an array
* @a: array name
* @n: is the number of elements OF the array to be printed
* Return: a and n inputs
*/
void print_array(int *a, int n)
{
int x;
for (i = 0;
i < n;
i++)
{
if (x !=
(n - 1))
printf("%d, ", a[x]);
else
printf("%d", a[x]);
}
printf("\n");
}
