#include <stdio.h>
#include <stdlib.h>

int main()
{
    //challenge 3
    int n,i,j;
    printf("enter a number to check prime: ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            j=1;
            break;
        }
     }
    if(j!=1){
        printf("the number is prime");
    }else{
        printf("the number is not prime");
    }
}
 /* int n,i,prime = 1;
    printf("enter a number to check prime: ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            prime = 0;
            break;
        }
     }
    if(prime){
        printf("the number is prime");
    }else{
        printf("the number is not prime");
    }
    */
