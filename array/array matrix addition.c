#include <stdio.h>
#define row 3
#define col 3
void main(){
    int a[row][col],b[row][col],c[row][col],i,j;
    printf("\nEnter %dX%d 1st matrix element:\n",row,col);
    for(i=0;i<row;i++){
        for(j=0;j<col;j++)
            scanf("%d",&a[i][j]);
    }
    printf("\nEnter %dX%d 2nd matrix element:\n",row,col);
    for(i=0;i<row;i++){
        for(j=0;j<col;j++)
            scanf("%d",&b[i][j]);
    }

    printf("\n1st Matrix:\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++)
            printf("%5d",a[i][j]);
            printf("\n");
    }
    printf("\n2nd Matrix:\n");
    
    for(i=0;i<row;i++){
        for(j=0;j<col;j++)
            printf("%5d",b[i][j]);
            printf("\n");
    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++)
        c[i][j]=a[i][j]+b[i][j];
    }

    printf("\nMatrix\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++)
        printf("%5d",c[i][j]);
        printf("\n");
    }
}