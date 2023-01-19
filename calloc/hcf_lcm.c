#include <stdio.h>

void main()
{
    int size,i,j,*a;

    printf("\nEnter the size of array:\n");
    scanf("%d",&size);
    
    a=(int *)calloc(sizeof(int),size);
    printf("Allocated size=%d\n",_msize(a));

    printf("Enter %d number:\n",size);
    for(i=0;i<size;i++)
    scanf("%d",a+i);

    for(i=0;i<size-1;i++)
    {
        for(int j=i+1;j<=size-1;j++)
        {
            if(*(a+i)>*(a+j))
        {
            int temp=*(a+i);
            *(a+i)=*(a+j);
            *(a+j)=temp;
        }
        }
    }
    
    // HCF
    int count;
    for(i=*a;count!=size;i--)
    {
        count=0;
        for(j=0;j<size;j++)
        {
            if(*(a+j)%i==0)
            count++;
        }
        if(count==size)
        {
            printf("\nHCF=%d",i);
            break;
        }
        
    }
    
    // LCM
    count=0;
    for(i=*(a+size-1);count!=size;i++)
    {
        count=0;
        for(j=0;j<size;j++)
        {
            if(i%*(a+j)==0)
            count++;
       }
        if(count==size)
        {
            printf("\nLCM=%d",i);
            break;
        }
        
    }
    
    
    free(a);

}