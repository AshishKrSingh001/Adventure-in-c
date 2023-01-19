#include <stdio.h>
void main()
{
    int size1,*p,i;
    printf("How many numbers ?\n");
    scanf("%d",&size1);
    p=(int *)calloc(sizeof(int),size1);
    printf("Enter %d numbers\n",size1);
    for(i=0;i<size1;i++)
    scanf("%d",p+i);
    int size2;
    printf("how many numbers?\n");
    scanf("%d",&size2);
    p=(int *)realloc(p,sizeof(int*)*(size1+size2));
    printf("enter %d numbers again \n",size2);
    for(i=size1;i<size1+size2;i++)
    scanf("%d",p+i);
    printf("All elements are\n");
    for(i=0;i<size1+size2;i++)
    printf("%d\t",*(p+i));
    free(p);
}
