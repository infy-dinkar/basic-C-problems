#include<stdio.h>
int main(){
    int days,week,year, months;
    printf("enter number no of days");
    scanf("%d",&days);
    months=days/30;
    printf("number of month=%d\n",months);
    week=days/7;
    printf("number of week=%d\n",week);
    year=days/365;/*ignoring leap year*/
    printf("number of year=%d\n",year);
    return 0;
}





