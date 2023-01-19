#include <stdio.h>
void main()
{
    int i,j,n;
    printf("\nEnter number of lines:");
    scanf("%d",&n);
    printf("\n1\n");
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        printf("*");
        printf("\n");
    }
    printf("\n\n2\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        printf("*");
        printf("\n");
    }
    printf("\n\n3\n");
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=n-i;j++)
        printf(" ");
        for(j=1;j<=i;j++)
        printf("*");
        printf("\n");
    }
    printf("\n\n4\n");
      for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        printf(" ");
        for(j=1;j<=i;j++)
        printf("*");
        printf("\n");
    }
    printf("\n\n5\n");
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=n-i;j++)
        printf(" ");
        for(j=1;j<=2*i-1;j++)
        printf("*");
        printf("\n");
    }
    printf("\n\n6\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        printf(" ");
        for(j=1;j<=2*i-1;j++)
        printf("*");
        printf("\n");
    }
    printf("\n\n7\n");
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        if(i==j || j==1 || i==n)
        printf("*");
        else
        printf(" ");
        printf("\n");
    }
    printf("\n\n8\n");
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        if(i==j || j==1 || i==n)
        printf("*");
        else
        printf(" ");
        printf("\n");
    }
    printf("\n\n9\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        printf(" ");
        for(j=1;j<=i;j++)
        if(i==j || j==1 || i==n)
        printf("*");
        else
        printf(" ");
        printf("\n");
    }
    printf("\n\n10\n");
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=n-i;j++)
        printf(" ");
        for(j=1;j<=i;j++)
        if(i==j || j==1 || i==n)
        printf("*");
        else
        printf(" ");
        printf("\n");
    }
}