#include <stdio.h>
#define size 5
void main(){
    int a[size],i,j,temp;
    printf("\nEnter %d number:",size);
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);
    printf("\nArray");
    for(i=0;i<size;i++)
    printf("%5d",a[i]);

    //Bubble sort
    for(i=0;i<=size-1;i++){
        for(j=0;j<=size-1;j++){
            if(a[j]<a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    // Displaying
    printf("\nSorted array:");
    for(i=0;i<size;i++)
    printf("%5d",a[i]);
}