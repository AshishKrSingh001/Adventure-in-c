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
    
    // Selection sort
    for(i=0;i<=size-2;i++){
        for(j=i+1;j<=size-1;j++){
            if(a[i]<a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    printf("\nSorted array:");
    // Displaying
    for(i=0;i<size;i++)
    printf("%5d",a[i]);
}