#include <stdio.h>

void func1(){

int var = 20;
printf("var valus is = %d \n",var);

int* ptr;

ptr = &var;

printf("value of var = %d \n", var);
printf("value of ptr = %p\n", ptr);
printf("value of *ptr = %d\n",*ptr);
    
}
int main(){
    func1();
    return 0;

} 