#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    srand(time(NULL));
    char x[7][10]={"monday","tuesday","wednesday","thursday","friday","saturday","sunday"};
    printf("%s",x[rand()%7]);

    return 0;

}

