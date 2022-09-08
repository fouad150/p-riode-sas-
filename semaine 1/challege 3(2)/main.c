#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a , b;
    printf("enter two number a and b: ");
    scanf("%f %f",&a,&b);
    if(a==b){
        printf("the permutation is impossible");
    }else if(a<b){
        printf("the permutation is impossible");
    }else{
        printf("%f %f",b,a);
    }
    return 0;
}
