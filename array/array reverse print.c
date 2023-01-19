#include <stdio.h>
#define size 4
void main(){
    int ar[size],i;
    printf("Enter %d numbers:",size);
    for(i=0;i<size;i++)
    scanf("%d",&ar[i]);
    printf("\n Array:");
    for(i=0;i<size;i++)
    printf("%5d",ar[i]);
    printf("\nReverse of array:");
    for(i=size-1;i>=0;i--)
    printf("%5d",ar[i]);
}