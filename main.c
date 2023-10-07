#include<stdio.h>
#include "D:\Codes\C\factorial.c"

int main()
{
    int x;

    printf("Enter the number : ");
    scanf("%d",&x);

    printf("The factorial is : %d", fact(x));
    return 0;
}