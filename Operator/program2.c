#include<stdio.h>
int main()
{
    int a,b;
 
    printf("Enter Value for a : ");
    scanf("%d", &a);
    printf("Enter Value for b : ");
    scanf("%d", &b);
 
    // Perform Arithmetic operations on variable 'a' and 'b'
    printf("Sum=%d \n", a+b);
    printf("Difference=%d \n", a-b);
    printf("Product=%d \n", a*b);
    printf("Quotient=%d \n", a/b);
    printf("Remainder=%d \n", a%b);
 
    return 0;
 
}