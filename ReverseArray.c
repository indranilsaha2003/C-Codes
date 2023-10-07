#include<stdio.h>
#define N 5
int main()
{
int i,arr[N];
printf("Enter the elements of the array \n");
for(i=0;i<N;i++)
scanf("%d",&arr[i]);
printf("The entered Elements in correct order : \n");
for(i=0;i<N;i++)
{
printf("%d ",arr[i]);
} for(i=0;i<N/2;i++)
{
arr[i]=arr[i]^arr[N-i-1];
arr[N-i-1]=arr[i]^arr[N-i-1];
arr[i]=arr[i]^arr[N-i-1];
}
printf("\nThe entered Elements in reverse order : \n");
for(i=0;i<N;i++)
{
printf("%d ",arr[i]);
} return 0;
}