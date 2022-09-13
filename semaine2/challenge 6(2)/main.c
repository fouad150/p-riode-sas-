#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,i,j,prime;
    printf("enter a number: ");
    scanf("%d",&number);

    for(i=0;i<=number-2;i++){
         for(j=2;j<number-i;j++)
    {
        if((number-i)%j==0)
        {
            prime=0;
            break;
        }else prime=1;
    }

    if(prime==1){
        printf("%d ",number-i);
    }
    }

    return 0;
}

