#include<stdio.h>
void reverseArray(int arr[], int a, int b)
{
    int i,j,temp;
    for(i=a,j=b;i<j;i++,j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j]=temp;
    }
}
int main()
{
    int i;
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    reverseArray(arr,0,9);
    reverseArray(arr,0,3);
    reverseArray(arr,4,9);
    for(i=0;i<10;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}