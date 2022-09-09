#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    //challenge 6
    char word[50],c;
    printf("enter a word:");
    scanf("%s",&word);
    int n=strlen(word);
    int i,T,a=0;
    for( i=0;i<n;i++){
                 {if(word[n-i-1]!=word[i])
                    a++;

                    }
               }

if (a==0){
             printf("the word is pilandrome");
         }else{printf("the word is not pilandrome");}


    return 0;
}
