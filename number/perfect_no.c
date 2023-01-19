#include <stdio.h>

int addoffactor(int n)
{
    int i,f=0;
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        f=f+i;
    }
    return f;
}
void check_perfect(int n)
{
    if(n==addoffactor(n))
    printf("Perfect no:");
    else
    printf("Not perfect no");
}
void main()
{
    int num;
    printf("\nEnter a number:\n");
    scanf("%d",&num);
    check_perfect(num);
}