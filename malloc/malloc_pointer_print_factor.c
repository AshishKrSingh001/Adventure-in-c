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

    printf("Array element:\n");
    for(i=0;i<n;i++)
    printf("%d\t",*(p+i));

    for(i=0;i<n;i++)
    {
        printf("\nFactors of %d is:\n",*(p+i));
        for(int j=1;j<=*(p+i);j++)
        {
            if(*(p+i)%j==0)
            printf("%d\t",j);
        }
    }
}