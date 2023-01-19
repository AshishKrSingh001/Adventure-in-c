#include <stdio.h>
#define size 5
void main()
{
    int i,a[size];
    printf("\nEnter %d array element:\n",size);
    for(i=0;i<size;i++)
    scanf("%d",a+i);
    for(i=0;i<size;i++)
    printf("%d\t",*(a+i));
    printf("\n");

    int temp;
    for(i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(*(a+i)>*(a+j))
            {
                temp=*(a+i);
                *(a+i)=*(a+j);
                *(a+j)=temp;

            }
        }
        
    }
    for(i=0;i<size;i++)
    printf("%d\t",*(a+i));


}