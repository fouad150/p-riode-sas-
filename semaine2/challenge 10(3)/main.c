#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i=0,a,sum=0;
    char answer[3];
    do{
        printf("enter a number: ");
        scanf("%d",&a);
        if(a>=0)
            {
                sum=sum+a;
              printf("do you want the sum (enter yes or no):");
              scanf("%s",&answer);
              if(strcmp(answer,"yes")==0){

                  break;
              }
        }else{
            i=i-1;}
            i++;
        if(i==10) break;
    }while(strcmp(answer,"yes")!=0);
    printf("the sum is: %d",sum);
    return 0;
}
