#include <stdio.h>
#include <stdlib.h>

int main()
{
      float tf,tc;
    printf("enter the temperature in Fahrenheit: ");
    scanf("%f",&tf);
    tc=(tf-32)/1.8;
    printf("the temperature in Celsius: %f\n",tc);
        if(tc<=0){printf("very cold");}
        else if(0<tc && tc<=20){printf("cold");}
        else if(20<tc&&tc<=40){printf("hot");}
        else{printf("very hot");}
    return 0;
}
