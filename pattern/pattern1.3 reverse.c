#include <stdio.h>
void main()
{
    int i,j,n;
    printf("\nEnter number of lines:");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        printf("%d",j);
        printf("\n");
    }
}