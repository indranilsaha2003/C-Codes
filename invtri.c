#include<stdio.h>
int main()
{
    int i,j,n,s;
    printf("Enter the size of the triangle: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for (s=1;s<=i;s++)
            {
                printf(" ");
            }
            {
                for(j=1;j<=2*(n-i)+1;j++)
                printf("*");
            }
        printf("\n");
    }   
    return 0;
}    