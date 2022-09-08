#include <stdio.h>
#include <stdlib.h>

int main()
{
      float tf,tc;
    printf("enter the temperature in Fahrenheit: ");
    scanf("%f",&tf);
    tc=(tf-32)/1.8;
    printf("the temperature in Celsius: %f",tc);
    return 0;
}
