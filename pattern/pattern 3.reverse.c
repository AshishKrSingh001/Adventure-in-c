#include <stdio.h>
void main(){
    int i,j,k,l;
    for(i=5;i>=1;i--){
        for(j=1;j<=5-i;j++)
            printf(" ");
        for(k=1;k<=i;k++)
            printf("*");
        for(l=2;l<=i;l++)
            printf("*");
        printf("\n");
    }
}