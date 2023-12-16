#include <stdio.h>

int main(void)
{
int day ;
scanf("%d", &day);

switch(day){
case 1:
    printf("Monday\n");
    break;
case 2:
    printf("Thuesday\n");
    break;
case 3:
    printf("Wensday\n");
    break;
case 4:
    printf("Thursday\n");
    break;
case 5:
    printf("Friday\n");
    break;
case 6:
    printf("Saturday\n");
    break;
case 7:
    printf("Sunday\n");
    break;
defaukt:
     printf("choose number from 1 to 7 only\n");
}
return(0);
}
 
