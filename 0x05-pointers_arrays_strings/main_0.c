#include <stdio.h>

void swap_int(int *, int *);
/**
*  * main - check the code for Holberton School students.
*   *
*    * Return: Always 0.
*     */
int main(void)
{
int a;
int b;

a = 98;
b = 42;
printf("%d, %d\n", a, b);
swap_int(&a, &b);
printf("%d, %d\n", a, b);
return (0);
}
