#include <stdio.h>
void main()
{
    int i,j,c,n;
    printf("\nEnter number of lines:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(c=1;c<=n-i;c++)
        printf(" ");
        for(j=1;j<=i;j++)
        printf("%d",j);
        for(j=i;j>=1;j--){
            if(j==1)
            continue;
            else
            printf("%d",j-1);
        }
        printf("\n");
    }
}











