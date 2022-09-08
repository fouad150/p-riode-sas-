#include <stdio.h>
#include <stdlib.h>

int main()
{
    //challenge1

    float a , b;
    printf("enter two number a and b: ");
    scanf("%f %f",&a,&b);
    float triple=(a+b)*3;
    if(a==b){printf("the triple of (a+b) is: %.2f",triple);}
    return 0;
}
