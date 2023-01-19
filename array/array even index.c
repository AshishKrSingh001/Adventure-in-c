#include <stdio.h>
#define size 5
void main(){
    int ar[size],i;
    printf("\nEnter %d numbers:",size);
    for(i=0;i<size;i++)
    scanf("%d",&ar[i]);
    printf("\nArray");
    for(i=0;i<size;i++)
    printf("%5d",ar[i]);
    printf("\nEven index of array is:");
    for(i=0;i<size;i++){
        if(i%2!=0)
        continue;
        else
        printf("%5d",ar[i]);
    }
}