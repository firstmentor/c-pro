#include<stdio.h>

int main()
{
    int a;
    //printf("Value of a =%d",a); //garbage value deag
    printf("Enter a Number");
    //enter a number 5  read karne ka kam scanf ka hai..
    //%d kon si value read karege
    scanf("%d",&a); //screen fold //read input value 
    //%d change karega addres of a se
    //&a address of a mai ja ke store hoga
    printf("Value of a =%d",a);
}