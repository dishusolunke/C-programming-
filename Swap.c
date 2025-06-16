#include<stdio.h>

int main()
{   printf("....swap without using 3rd value....\n");
    int a,b;
    printf("enter value of a:\n");
    scanf("%d",&a);
    printf("enter value of b:\n");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("swapping value of a %d\n",a);
    printf("swapping value of b %d",b);
    return 0;
    
}
