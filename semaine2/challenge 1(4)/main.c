#include <stdio.h>
#include <stdlib.h>
int add(int a,int b){
return a+b;}

int main()
{
   int a,b;
   printf("enter the number a: ");
   scanf("%d",&a);
   printf("enter the number b: ");
   scanf("%d",&b);
   printf("a + b = ");
   printf("%d",add(a,b));

    return 0;
}
