#include <stdio.h>
#include <stdlib.h>

int main()
{
    char number[50];
    printf("enter a number: ");
    scanf("%s",&number);
    printf("the inverted number is: ");
    int N=strlen(number);
    for(int i=1;i<=N;i++){
        printf("%c",number[N-i]);
    }
    return 0;
}
