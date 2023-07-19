#include<stdio.h>
#include<math.h>
int main(){
    int base,power,result;
    printf("enter value of base");
    scanf("%d",&base);
    printf("enter value of power");
    scanf("%d",&power);
    result=pow(base,power);
    printf("%d",result);
    return 0;
}