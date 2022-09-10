#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{   //challenge 9
    int d,m,y;
    printf("enter the day: ");
    scanf("%d",&d);
    printf("enter the month: ");
    scanf("%d",&m);
    printf("enter the year: ");
    scanf("%d",&y);

    if(m==1){printf("%d-January-%d",d,y);}
    else if(m==2){printf("%d-fabuary-%d",d,y);}
    else if(m==3){printf("%d-march-%d",d,y);}
    else if(m==4){printf("%d-april-%d",d,y);}
    else if(m==5){printf("%d-may-%d",d,y);}
    else if(m==6){printf("%d-june-%d",d,y);}
    else if(m==7){printf("%d-july-%d",d,y);}
    else if(m==8){printf("%d-august-%d",d,y);}
    else if(m==9){printf("%d-september-%d",d,y);}
    else if(m==10){printf("%d-october-%d",d,y);}
    else if(m==11){printf("%d-novomber-%d",d,y);}
    else if(m==12){printf("%d-december-%d",d,y);}

    return 0;
}
