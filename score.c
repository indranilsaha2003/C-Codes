#include <stdio.h>
int main()
{      
       int scr;
       printf("Enter Student's Score out of 100\n");
       scanf("%d",&scr);
       if (scr>100 || scr<0)
              printf("Invalid Score\n");
       else
       switch (scr/10)
       {
              case 10: printf("O\n");
              break;
              case 9: printf("O\n");
              break;
              case 8: printf("E\n");
              break;
              case 7:printf("A\n");
              break;
              case 6:printf("B\n");
              break;
              case 5:printf("C\n");
              break;
              case 4:printf("D\n");
              break;
              case 3:printf("F\n");
              case 2:printf("F\n");
              case 1:printf("F\n");
              case 0:printf("F\n");
              break;
              default: printf("Invalid Score\n");
              break;
       }
       return 0;
}