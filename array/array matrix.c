#include <stdio.h>
#define size 3
void main(){
    int n[size][size],i,j;
    printf("\nEnter %dX%d matrix element:\n",size,size);
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            scanf("%d",&n[i][j]);
        }
    }
    printf("\nMatrix\n");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++)
        printf("%5d",n[i][j]);
        printf("\n");
    }
}