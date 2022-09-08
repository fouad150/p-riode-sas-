#include <stdio.h>
#include <stdlib.h>

int main()
{

    float km,mile;
    printf("enter the distance in km: ");
    scanf("%f",&mile);
    km=mile/1.609;
    printf("the distance in mile is: %f",km);

    return 0;
}
