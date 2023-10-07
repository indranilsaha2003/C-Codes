#include <stdio.h>
#include <math.h>
int main() {
    int num,n1,n2,n3,count=0, digit=0 ;
    float temp;
    printf("Enter the number: ");
    scanf("%d",&num);
    n1=num;
    n2=num;
    n3 = num;
    while(n1/10!=0){
        digit++;
        n1 = n1/10;
    }
    if (n2/pow(10,digit)<10)
        temp = n2/pow(10,digit);
    while(n3/10!=0){
        count=count+1;
        n3 = n3/10;
    }
    if(temp>1.0 && temp<10.0)
        printf("%.2f x 10e%d",temp,count);
    else if(temp==1)
        printf("10e%d",count);
    return 0;
}