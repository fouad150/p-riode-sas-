#include <stdio.h>
#include <stdlib.h>
int T[100],i,j,x,l;
void sort(){
for(i=0;i<l;i++){
    for(j=0;j<l-1;j++){
        if(T[j]>T[j+1]){
            x=T[j];
            T[j]=T[j+1];
            T[j+1]=x;
        }
    }
}
}
void printarray(){
for(i=0;i<l;i++){
   printf("  %d",T[i]);
}
}
int main()
{

    printf("enter the length of the chain: ");
    scanf("%d",&l);
    for(i=0;i<l;i++){
        scanf("%d",&T[i]);
    }
    sort();
    printarray();

    return 0;
}
