#include <stdio.h>

int main(void)
{
int day ;
scanf("%d", &day);

switch(day){
case 1:
    printf("Monday");
    break;
case 2:
    printf("Thuesday");
    break;
case 3:
    printf("Wensday");
    break;
case 4:
    printf("Thursday");
    break;
case 5:
    printf("Friday");
    break;
case 6:
    printf("Saturday");
    break;
case 7:
    printf("Sunday");
    break;
}
return(0);
}
