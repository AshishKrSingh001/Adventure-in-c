// WAP to input any square matrix and after that find sum of top,bottom,left,right line element using calloc.

// WAP to input any square matrix and after that find sum of both perpendicular digonal element using calloc.

// WAP to input any square matrix and after that check matrix is symmetric or not using calloc.


#include <stdio.h>

void main()
{
    int *p,size,i,j;

    printf("\nEnter size of row/column of Square Matrix:\n");
    scanf("%d",&size);

    p=(int *)calloc(sizeof(int),size*size);
    printf("Allocated size: %d\n",_msize(p));

    printf("Enter %d element of Square Matrix:\n",size*size);
    for(i=0;i<size;i++)
    for(j=0;j<size;j++)
    scanf("%d",p+i*size+j);

    printf("Matrix is:\n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        printf("%d\t",*(p+i*size+j));

        printf("\n");
    }
    int top=0,bottom=0,left=0,right=0,diagonal1=0,diagonal2=0,c=0;

    for(i=0;i<size;i++)
        {
            top=top+*(p+i);
            bottom=bottom+*(p+size*(size-1)+i);
            left=left+*(p+size*i);
            right=right+*(p+size*i+size-1);

            diagonal1=diagonal1+*(p+i*size+i);
            diagonal2=diagonal2+*(p+i*size+(size-1-i));
            if(*(p+i*size+(size-1-i))==*(p+(size-1-i)*size+i))
            c++;
        }
    //1
   printf("First_Row(TOP)=%d\nFirst_Column(LEFT)=%d\nLast_Column(RIGHT)=%d\nLast_Row(BOTTOM)=%d",top,left,right,bottom);

    //2
    printf("\nFirst_Diagonal=%d\nSecond_Diagonal=%d",diagonal1,diagonal2);

    //3
    if(c==size)
    printf("\nSquare Matrix is Symmetric");
    else
    printf("\nSquare Matrix is not Symmetric");

    free(p);
}