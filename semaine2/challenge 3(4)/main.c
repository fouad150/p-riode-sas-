#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//challenge 3
bool prime(int a){
int i=2;
while(i<a){
    if(a%i==0)
        return false;
     i++;
}
return true;}
int main()
{
    int a;
    printf("enter a number to check prime: ");
    scanf("%d",&a);
    if(prime(a)){
        printf("the number is prime");
    }else{
    printf("the number is not prime");}

    return 0;
}
