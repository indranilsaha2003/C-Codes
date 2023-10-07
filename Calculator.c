#include<stdio.h>
int main()
{
    float a;
    float b;
    float res;
    int choice;

    printf("\n\nWelcome to Indranil Saha's calculator :)\n\n");

    printf("Enter the two numbers: \n");
    scanf("%f%f",&a,&b);

    printf("\n\nEnter what you want to do: \n\n1 for Addition(+) \n\n2 for Subtraction(-) \n\n3 for Multiply(x) \n\n4 for Division(/) \n\n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1: 
                res=a+b;
                printf("\nThe answer is: %.2f\n\n",res);
                break;
        case 2:
                res=a-b;
                printf("\nThe answer is: %.2f\n\n",res);
                break;
        case 3:
                res=a*b;
                printf("\nThe answer is: %.2f\n\n",res);
                break;
        case 4: 
                res=a/b;
                printf("\nThe answer is: %.2f\n\n",res);
                break;
        default:
                printf("\nInvalid\n\n");                                        
    }
    return 0;
}