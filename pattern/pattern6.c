#include <stdio.h>

void main()
{
    int i,j,m;
    printf("\nEnter row/column size:\n");
    scanf("%d",&m);

    for(i=1;i<=m;i++)
    {
        for(j=1;j<=m-i;j++)
        printf(" ");
        for(j=1;j<=i;j++)
        if(i==j || j==1 || i==m)
        printf("*");
        else
        printf(" ");
        printf("\n");
    }
    
}