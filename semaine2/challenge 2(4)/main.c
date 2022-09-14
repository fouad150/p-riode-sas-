#include <stdio.h>
#include <stdlib.h>
int a,b;
void swap(){
 int x;
 printf("a=%d , b=%d",a,b);
 x=a;
 a=b;
 b=x;
}
int main()
{
    printf("enter a: ");
    scanf("%d",&a);
    printf("enter b: ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("\na=%d , b=%d",a,b);
    return 0;
}
