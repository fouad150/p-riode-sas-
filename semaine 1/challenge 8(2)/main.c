#include <stdio.h>
#include <stdlib.h>

int main()
{     //challenge 8
      char c;
    printf("enter a character: ");
    scanf("%c",&c);
    if(isalpha(c)){
            if(isupper(c))
            printf("the character is alphabet and capital letter");
            else
            printf("the character is not alphabet and small letter");
       }else{printf("the character is not alphabet");}
    return 0;
}
