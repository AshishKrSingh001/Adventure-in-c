#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *p,i,n,position;
    printf("Enter array size:\n");
    scanf("%d",&n);

    p=(int *)calloc(sizeof(int),n);

    printf("Enter element of array:\n");
    for(i=0;i<n;i++)
    scanf("%d",p+i);

    printf("Enter position which you want to delete:\n");
    scanf("%d",&position);

    for(i=position-1;i<n-1;i++)
    *(p+i)=*(p+i+1);

    printf("Array element after deletion:\n");
    for(i=0;i<=n-2;i++)
    printf("%d\t",*(p+i));

    free(p);
}