#include <stdio.h>
#define m   2
#define row 2
#define col 2
void main(){
    int i,j,k,a[m][row][col],b[row][col];
    printf("\nEnter Three Matrix:\n");
    for(i=0;i<m;i++){
        printf("\nEnter %d element value:\n",i+1);
        for(j=0;j<row;j++)
        for(k=0;k<col;k++)
        scanf("%d",&a[i][j][k]);
    }
    for(j=0;j<row;j++){
        for(k=0;k<col;k++){
            b[j][k]=a[1][j][k]+a[0][j][k];
        }
    }
        printf("\nEnter 1st element value:\n");
        for(j=0;j<row;j++){
        for(k=0;k<col;k++)
       printf("%d\t",b[j][k]);
       printf("\n");
        }    
}

    

    // for(i=0;i<m;i++){
    //     printf("\nEnter %d element value:\n",i+1);
    //     for(j=0;j<row;j++){
    //     for(k=0;k<col;k++)
    //     printf("%5d",a[i][j][k]);
    //     printf("\n");
    //     }
    // }