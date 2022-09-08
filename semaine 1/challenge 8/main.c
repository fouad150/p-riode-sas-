#include <stdio.h>
#include <stdlib.h>

int main()
{
//test
  // challenge 8
  float a,b,c,d;
  printf("enter the number a: ");
  scanf("%f",&a);
  printf("enter the number b: ");
  scanf("%f",&b);
  printf("enter the number c: ");
  scanf("%f",&c);
  printf("enter the number d: ");
  scanf("%f",&d);
  float sum=(a+b+c+d);
  printf("(a+b+c+d)= %.nf",sum);
  float average=sum/3;
  printf("\nthe average of numbers is: %.nf",average);
    return 0;
}
