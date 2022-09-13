#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    printf("enter a number: ");
    scanf("%f",&a);
    for(int i=1;i<=10;i++){
            printf("%.2f\n",a*i);

    }
    return 0;
}
