#include<stdio.h>
int main() 
{
   int n,i,s1,j,s2,k;
   printf("Enter the size of the rhombus: ");
   scanf("%d",&n);
   for (i=1;i<=n;i++)
   {
      for (s1=1;s1<=n-i;s1++)
      {
         printf(" ");
      }
      for(j=1;j<=1;j++)
      {
         printf("/");
      }
      for (s2=1;s2<=2*i-2;s2++)
      {
         printf("#");
      }
      for(k=1;k<=1;k++)
      {
         printf("\\");
      }
      printf("\n");
   }
   for(i=1;i<=n;i++)
   {
      for(s1=1;s1<i;s1++)
      {
         printf(" ");
      }
      for(j=1;j<=1;j++)
      {
         printf("\\");
      }
      for(s2=1;s2<=2*(n-i);s2++)
      {
         printf("#");
      }
      for(k=1;k<=1;k++)
      {
         printf("/");
      }
      printf("\n");
   }
   return 0;
}