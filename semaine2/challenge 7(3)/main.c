#include <stdio.h>
#include <stdlib.h>

int main()
{

     int n, U0 = 0, U1 = 1, U2, i;
     printf("Enter the n value: ");
     scanf("%d", &n);
     if(n == 0 || n == 1)
     printf("%d", n);
     else
     U2 = U1 + U0;
    for (i = 3; i <= n; i++)
     {
     U0 = U1;
     U1 = U2;
     U2 = U0 + U1;
     }
     printf("%d", U2);




    return 0;
}
