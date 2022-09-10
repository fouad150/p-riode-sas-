#include <stdio.h>
#include <stdlib.h>

int main()

{
    //challenge 12
    float a,b,x1,y1,x2,y2,x,y;
    printf("the equation of a segment is y=ax+b:\n");

    printf("enter a: ");
       scanf("%f",&a);
    printf("enter b: ");
       scanf("%f",&b);

    printf("you have M(x1,y1) and N(x2,y2) \n");

    printf("enter x1 and y1: ");
       scanf("%f %f",&x1,&y1);
    printf("enter x2 and y2: ");
       scanf("%f %f",&x2,&y2);

    printf("enter another point C(x,y)\n");

    printf("enter x: ");
       scanf("%f",&x);
    printf("enter y: ");
       scanf("%f",&y);
    if(y==a*x+b)printf("the point C belong to the segment ");
        else printf("the point C doesn't belong to the segment ");

    return 0;
}
