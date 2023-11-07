#include<stdio.h>

int main()
{
    int a =5, b=10;
    //printf("\nValue Of a=%d and Value of b =%d",a,b);
    printf("\nValue of a =%d",a++);  //5
    printf("\nValue of a =%d",++a);  //7
    printf("\nValue of b =%d",++b);  //11
    printf("\nValue of b =%d",b++);  //11
    printf("\nLast Value =%d",(a++)+(++b));






    return 0;
}