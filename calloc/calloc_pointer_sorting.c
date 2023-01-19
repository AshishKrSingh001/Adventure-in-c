#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *a,n,i;
    printf("\nEnter size of array:\n");
    scanf("%d",&n);

    a=(int *)calloc(sizeof(int),n);
    printf("Allocated size=%d",_msize(a));

    printf("\nEnter array element:\n");
    for(i=0;i<n;i++)
    scanf("%d",a+i);

    for(i=0;i<n-1;i++)
    {
        for(int j=i+1;j<=n-1;j++)
        {
            if(*(a+i)>*(a+j))
            {
                int temp=*(a+i);
                *(a+i)=*(a+j);
                *(a+j)=temp;
            }
        }
    }

    printf("Array element is:\n");
    for(i=0;i<n;i++)
    printf("%d\t",*(a+i));

    free(a);
}
