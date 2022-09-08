#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,delta,s1,s2,s;
    printf("enter a,b and c from the formula of 2nd degree equation: \n");
    printf("enter a: ");
    scanf("%f",&a);
    printf("enter b: ");
    scanf("%f",&b);
    printf("enter c: ");
    scanf("%f",&c);
    delta=pow(b,2)-4*a*c;
    s1=(-b+sqrt(delta))/2*a;
    s2=(-b-sqrt(delta))/2*a;
    s=-b/2*a;
    if(delta>0)
           {
            printf("the solutions are: s1=%f s2=%f",s1,s2);
            }
    else if(delta==0)
           {printf("the solution is: %f",s);}
    else{printf("there is no solution");}
    return 0;
}
