#include <stdio.h>
#define size 3
void main(){
    int i,n[size];
    printf("\nEnter %d numbers:",size);
    for(i=1;i<size;i++)
    scanf("%d",&n[i]);
    for(i=1;i<size;i++)
    printf("%d\t",n[i]);
}