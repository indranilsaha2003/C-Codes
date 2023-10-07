#include<stdio.h>
int main()
{
    int n,i,x,flag=0;

    printf("Enter the size of array: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &x);

    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            printf("The element is present in the array in the %d position", i+1);
            flag++;
        }
    }
    if(flag==0)
    printf("The elements is not present in the array");
    return 0;
}