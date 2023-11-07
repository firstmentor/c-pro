// C program to illustrate for loop
#include <stdio.h>

// Driver code
int main()
{
int num,i;
printf("Enter A Number to generate the table");
scanf("%d",&num);
printf("\n Table of %d",num);
//output :2
// 2*1 =2
// 2*2 =4

for (i = 1; i <= 10; i++)
{
	printf( "%d\n",i); 
}
return 0;
}
