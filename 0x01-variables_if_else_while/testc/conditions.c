#include <stdio.h>

int main(void)
{
int number;
printf("set a number\n");
scanf("%d", &number);

if (number > 0){
printf("your number is positive\n");
} else if (number < 0){ 
printf("your number is negative\n");
} else { 
printf("non-exist");
}
return(0);
}
