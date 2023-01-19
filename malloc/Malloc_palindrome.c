#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *a,i,n;
    printf("\nEnter size of array:\n");
    scanf("%d",&n);

    a=(int *)malloc(sizeof(int)*n);
    printf("Allocated size=%d",_msize(a));

    printf("\nEnter array element:\n");
    for(i=0;i<=n-1;i++)
    scanf("%d",a+i);

    printf("\nArray element are:\n");
    for(i=0;i<=n-1;i++)
    printf("%d\t",*(a+i));
    printf("\n");

    printf("\nPalindrome element are:\n");
    for(i=0;i<=n-1;i++)
    {
        int j=*(a+i),rev=0,rem;
        while(j>0)
        {
            rem=j%10;
            rev=rev*10+rem;
            j=j/10;
        }
        if(*(a+i)==rev)
        printf("%d\t",rev);
    }



}