#include "main.h"

/**
* print_array - a function that prints n elements of an array
* @a: array name
* @n: is the number of elements OF the array to be printed
* Return: a and n inputs
*/
void print_array(int *a, int n)
{
 if (n <= 0) {
        printf("\n");
        return;
    }

    printf("%d", a[0]);

    for (int i = 1; i < n; i++) {
        printf(", %d", a[i]);
    }

    printf("\n");
}