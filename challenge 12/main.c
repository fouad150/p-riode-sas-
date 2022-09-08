#include <stdio.h>
#include <stdlib.h>

int main()
{  //challenge 12
    char number[3];
  printf("enter an integer contains three numbers: ");
  scanf("%s",number);
  printf("%c%c%c",number[2],number[1],number[0]);
    return 0;
}
