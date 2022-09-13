#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num ,max , sum=0;
   do{
    printf("enter a number between 1 and 100 (0 : to exit):");
    scanf("%d",&num);
    if(num>0 && num<100){
        sum+=num;
        if(num>max) max=num;
    }else if(num!=0) printf("the value should be between 1 & 100\n");
   }while(num!=0);
  printf("\nthe max number is: %d\n",max);
  printf("\nthe sum of the numbers is: %d\n",sum);

    return 0;
}

