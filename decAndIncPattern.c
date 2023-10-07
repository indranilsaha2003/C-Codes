#include<stdio.h>
int main()
{
    int i,j,k,l,n;
    printf("Enter how many rows: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for(j=1;j<=n-i+1;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    for(i=1;i<=n-1;i++)
    {
        for(k=1;k<=i+1;k++)
        {
            l=n-i;
            printf("%d",l);
        }
        printf("\n");
    }
    return 0;
}