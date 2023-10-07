#include<stdio.h>
int main()
{
    int i,j,n,s,d;
    int a=1;
    printf("Enter: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for (j=1;j<=i;j++)
        {
            d=64+a;
            char ch = (char)d;
            printf("%c",ch);
            a++;
        }
        a=1;
        printf("\n");
    }    
    return 0;
}    