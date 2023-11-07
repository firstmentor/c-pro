#include<stdio.h>

int main()
{
    int a,b,max;
    printf("Enter Two Numbers:\n");
    scanf("%d%d",&a,&b);
    max =(a>b)?a:b;
    printf("\nMax Number = %d",max);


    return 0;
}


//Max Between Three Numbers

#include<stdio.h>

int main()
{
    int a,b,c,max;
    printf("Enter Three Numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    max =(a>b&&a>c)?a:(b>a&&b>c)?b:c;
    printf("\nMax Number = %d",max);


    return 0;
}