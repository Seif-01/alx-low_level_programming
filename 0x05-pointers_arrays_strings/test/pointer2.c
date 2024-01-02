#include <stdio.h>
void func1()
{
    int var = 20;

    int* ptr = &var;
    int** ptr2 = &ptr;

    printf("value at ptr = %p \n",ptr);
    printf("value at var = %d \n", var);
    printf("value at *ptr = %d \n",*ptr);
    printf("value at **ptr2 = %d \n",**ptr2);
}
int main (){
func1();
    return 0;
}
