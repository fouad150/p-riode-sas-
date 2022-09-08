#include <stdio.h>
#include <stdlib.h>

int main()
{
    //challenge 7
   int a,b;
   printf("enter the number a: ");
   scanf("%d",&a);
   printf("enter the number b: ");
   scanf("%d",&b);
   float ad=a+b;
   float sub=a-b;
   float mult=a*b;
   float div=(float)a/b;
   float rem=a%b;

   printf("a+b=%.2f\n",ad);
   printf("a-b=%.2f\n",sub);
   printf("a*b=%.2f\n",mult);
   printf("a/b=%.2f\n",div);
   printf("a%b=%.2f\n",rem);
    return 0;
}
