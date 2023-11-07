#include<stdio.h>

int main()
{
    float c,f;
    printf("Enter Temperature in Celcius:\n");
    scanf("%f",&c);
    f =(c*9/5)+32;
    
    printf("\nTemp in Fah = %f",f);
    return 0;
}