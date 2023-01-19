#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *p,i,n,position,element;
    printf("Enter array size:\n");
    scanf("%d",&n);

    p=(int *)malloc(sizeof(int)*n);

    printf("Allocated size is %d",_msize(p));

    printf("\nEnter element of array:\n");
    for(i=0;i<n;i++)
    scanf("%d",p+i);

    printf("Array element before add new element:\n");
    for(i=0;i<n;i++)
    printf("%d\t",*(p+i));

    printf("\nEnter position which you want to add:\n");
    scanf("%d",&position);

    printf("Enter element:\n");
    scanf("%d",&element);

    
    for(i=n;i>=position;i--)
    *(p+i)=*(p+i-1);
    *(p+position-1)=element;

    printf("Array element after add new element:\n");
    for(i=0;i<=n;i++)
    printf("%d\t",*(p+i));
    
}