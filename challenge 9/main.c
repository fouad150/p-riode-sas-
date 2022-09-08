#include <stdio.h>
#include <stdlib.h>

int main()
{
     //challenge 9
 float x1,y1,x2,y2;
 printf("we have to points: N(x1,y1) M(x2,y2)");
 printf("\nenter x1:");
 scanf("%f",&x1);
 printf("enter y1:");
 scanf("%f",&y1);
 printf("enter x2:");
 scanf("%f",&x2);
 printf("enter y2:");
 scanf("%f",&y2);
 float MN=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
 printf("the distance MN is: ");
 printf("%f",MN);
    return 0;
}
