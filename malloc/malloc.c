#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *a,n,i;
    printf("\nEnter size of array:\n");
    scanf("%d",&n);

    a=(int *)malloc(sizeof(int)*n);
    printf("Allocated size=%d",_msize(a));

    printf("\nEnter array element:\n");
    for(i=0;i<n;i++)
    scanf("%d",a+i);

    printf("Array element is:\n");
    for(i=0;i<n;i++)
    printf("%d\t",*(a+i));

    

}
