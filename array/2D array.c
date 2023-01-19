// Array:
// An array is the collection of data items of the same page.
//  Items are stored at contiguous memory locations.
//  It can also store the collection of derived data types,such as pointers,structure,etc.
//  A one-dimensional array is like a list.
//  A two dimensional array is like a table.
#include <stdio.h>
int main(){
    int marks[2][4],i,j;
    printf("Enter 8 number\n");
     for(i=0;i<=1;i++){
       for(j=0;j<=3;j++){
            scanf("%d",&marks[i][j]);
         }
     }
    for(i=0;i<=1;i++){
       for(j=0;j<=3;j++){
        printf("%d\t",marks[i][j]);
       }
        printf("\n");
        
    }
    return 0;
}