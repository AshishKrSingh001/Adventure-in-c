#include <stdio.h>
#define size 5
void main(){
    int a[size],b[size],i,j=0;
    printf("\nEnter %d number:",size);
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);
    printf("\nArray");
    for(i=0;i<size;i++)
    printf("%5d",a[i]);
    for(i=size-1;i>=0;i--){
           b[j]=a[i];
           j++;
    } 
    printf("\nReverse of array");
    for(j=0;j<size;j++)
    printf("%5d",b[j]);
}