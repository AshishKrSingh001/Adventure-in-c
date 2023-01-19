#include <stdio.h>
#define row 3
#define col 3
void main(){
    int i,j,a[row][col],b[row][col],c[row][col];
    printf("\nEnter 1st Matrix:\n");
    for(i=0;i<row;i++)
    for(j=0;j<col;j++)
    scanf("%d",&a[i][j]);
    printf("\nEnter 2nd Matrix:\n");
    for(i=0;i<row;i++)
    for(j=0;j<col;j++)
    scanf("%d",&b[i][j]);
    for(i=0;i<row;i++)
    for(j=0;j<col;j++)
    c[i][j]=a[i][j]+b[i][j];
    for(i=0;i<row;i++){
    for(j=0;j<col;j++)
    printf("%5d",c[i][j]);
    printf("\n");
    }
}