#include <stdio.h>

int main()
{
    int a;
    float b;
    a = 5;
    b = 6.5;
    //\n Escape Sequence in C
    printf("%d\n%f", a, b);
    printf("value of a =%d", a);
    printf("\nValue of b=%f", b);
    printf("Value of a =%d and value of b=%f", a, b);
    return 0;
}