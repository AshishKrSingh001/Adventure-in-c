#include<stdio.h>
void main()
{
    int *p,row,col,i,j;
    printf("\nEnter row and column respectively:\n");
    scanf("%d%d",&row,&col);

    p=(int *)malloc(sizeof(int)*row*col);
    printf("Allocated size=%d",_msize(p));

    printf("\nEnter matrix element:\n");
    for(i=0;i<row;i++)
    for(j=0;j<col;j++)
    scanf("%d",p+i*col+j);
    printf("\nmatrix is\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        printf("%d\t",*(p+i*col+j));
        printf("\n");
    }
    


}