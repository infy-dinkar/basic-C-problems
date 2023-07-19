#include<stdio.h>
int main(){
    float principle, rate, time,si;
    printf("enter value of loan amount");
    scanf("%f",&principle);
    printf("enter value of rate in percentage");
    scanf("%f",&rate);
    printf("enter value of time in year");
    scanf("%f",&time);
    si=(principle*rate*time)/100;
    printf(" intrest to be paid=%f",si);
    return 0;





}