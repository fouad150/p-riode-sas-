#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h1,m1,s1,h2,m2,s2;
<<<<<<< HEAD
    printf("    enter the moment 1 in this formula (HH:MM:SS) :  ");

     scanf("%d:%d:%d",&h1,&m1,&s1);


    printf("    enter the moment 2:  ");
    scanf("%d:%d:%d",&h2,&m2,&s2);

    if(h1<h2) printf("the moment 1 comes before the moment 2. ");
        else if(h1>h2)
        printf("the moment 1 comes after the moment 2. ");
    else{if(m1<m2)
          printf("the moment 1 comes before the moment 2. ");
        else if(m1>m2)
          printf("the moment 1 comes after the moment 2. ");
         else{if(s1<s2)
            printf("the moment 1 comes before the moment 2. ");
             else if(s1>s2)
=======
    printf("    enter the moment 1:\n");
      printf("hour: ");
    scanf("%d",&h1);
      printf("minute: ");
    scanf("%d",&m1);
      printf("second: ");
    scanf("%d",&s1);

    printf("    enter the moment 2:\n");
      printf("hour: ");
    scanf("%d",&h2);
      printf("minute: ");
    scanf("%d",&m2);
      printf("second: ");
    scanf("%d",&s2);
    printf("moment 1 is %d : %d : %d",h1,m1,s1);
    printf("\nmoment 2 is %d : %d : %d\n",h2,m2,s2);
    if(h1>h2) printf("the moment 1 comes before the moment 2. ");
        else if(h1<h2)
        printf("the moment 1 comes after the moment 2. ");
    else{if(m1>m2)
          printf("the moment 1 comes before the moment 2. ");
        else if(m1<m2)
          printf("the moment 1 comes after the moment 2. ");
         else{if(s1>s2)
            printf("the moment 1 comes before the moment 2. ");
             else if(s1<s2)
>>>>>>> 1685cafae4fd2ad3c6101743e364b4aef9684cf8
            printf("the moment 1 comes after the moment 2. ");
            else{printf("the moments are the same.");}
         }
        }
    return 0;
}
