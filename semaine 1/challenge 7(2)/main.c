#include <stdio.h>
#include <stdlib.h>

int main()
{   //challenge 7
    float m;
    printf("enter your mark: ");
    scanf("%f",&m);
    if(m<10){
         printf("failed");
    }
    if(m>=10&&m<12){
         printf("pass");
    }
    if(m>=12&&m<14){
         printf("well enough");
    }
    if(m>=14&&m<16){
         printf("good");
    }
    if(m>=16){
         printf("very good");
    }

    return 0;
}
