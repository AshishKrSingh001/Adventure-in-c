#include <stdio.h>
#define size 5
void main(){
    int n[size],i,j,temp;
    printf("\nEnter %d number:",size);
    for(i=0;i<size;i++)
    scanf("%d",&n[i]);
    printf("\nArray");
    for(i=0;i<size;i++)
    printf("%5d",n[i]);
    // for(i=0,j=size-1;i<j;i++,j++){
    //     temp=n[i];
    //     n[i]=n[j];
    //     n[j]=temp;
    // }
        i=0;
        j=size-1;
    while(i<j){
        temp=n[i];
        n[i]=n[j];
        n[j]=temp;
        i++;
        j--;
    }
    printf("\nReverse of array");
    for(i=0;i<size;i++)
    printf("%5d",n[i]);
}