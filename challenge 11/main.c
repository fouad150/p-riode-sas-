#include <stdio.h>
#include <stdlib.h>

int main()
{
   // challenge 11
  float circ,length,width;
  printf("enter the length of the rectangle: ");
  scanf("%f",&length);
  printf("enter the width of the rectangle: ");
  scanf("%f",&width);
  circ=2*(length+width);
  printf("the circumference of the rectangle equals: %f",circ);

    return 0;
}
