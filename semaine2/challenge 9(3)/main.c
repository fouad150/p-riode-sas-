#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,n,x=1;
    printf("enter the base: ");
    scanf("%d",&a);
    printf("enter the exponent: ");
    scanf("%d",&n);
    int i=0;
    while(i<n){if(a>0&&n>0){
        x=x*a;
        i++;
    }

    }
    printf("%d",x);
    return 0;
}
