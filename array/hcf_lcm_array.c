#include <stdio.h>

void main()
{
    int size,i,hcf,lcm,j;

    printf("\nEnter the size of array:\n");
    scanf("%d",&size);
    int a[size];

    printf("Enter %d number:\n",size);
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);

    // for(i=0;i<size;i++)
    // {
    //     if(a[i]<a[0])
    //     {
    //         int temp1=a[0];
    //         a[0]=a[i];
    //         a[i]=temp1;
    //     }
    //     if(a[i]>a[size-1])
    //     {
    //         int temp2=a[size-1];
    //         a[size-1]=a[i];
    //         a[i]=temp2;
    //     }
    // }

    for(i=0;i<size-1;i++)
    {
        for(int j=i+1;j<=size-1;j++)
        {
            if(a[i]>a[j])
        {
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        }
    }

    int h_num=a[size-1];
    int l_num=a[0];
    printf("Highest no=%d\nLowest no=%d",h_num,l_num);
    
    // HCF
    int count;
    for(i=l_num;count!=size;i--)
    {
        count=0;
        for(j=0;j<size;j++)
        {
            if(a[j]%i==0)
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
    for(i=h_num;count!=size;i++)
    {
        count=0;
        for(j=0;j<size;j++)
        {
            if(i%a[j]==0)
            count++;
       }
        if(count==size)
        {
            printf("\nLCM=%d",i);
            break;
        }
        
    }
    
    


}