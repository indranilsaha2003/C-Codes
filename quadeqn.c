#include<stdio.h>
#include<math.h>
int main()
{      float a,b,c,r1,r2;
       int dis;
       printf("Enter values of a,b,c respectively:\n");
       scanf("%f%f%f",&a,&b,&c);
       dis=pow(b,2)-4*a*c;
       if(dis>0)
       {
              printf("Roots are real\n");
              r1=-b+sqrt(pow(b,2.0)-4.0*a*c)/2.0*a;
              r2=-b-sqrt(pow(b,2.0)-4.0*a*c)/2.0*a;
              printf("The roots are %f and %f\n",r1,r2);
       }
       else if(dis<0)
       {
              printf("Roots are imaginary\n");
              r1=-b+sqrt(pow(b,2.0)-4.0*a*c)/2.0*a;
              r2=-b-sqrt(pow(b,2.0)-4.0*a*c)/2.0*a;
              printf("The roots are %f and %f\n",r1,r2);
       }
       else if(dis==0)
       {
              printf("Roots are real and equal\n");
              r1=-b+sqrt(pow(b,2.0)-4.0*a*c)/2.0*a;
              r2=-b-sqrt(pow(b,2.0)-4.0*a*c)/2.0*a;
              printf("The roots are %f and %f\n",r1,r2);
       }       
       else
              printf("Invalid input\n");
return 0;
}