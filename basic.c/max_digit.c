#include <stdio.h>
void max_digit(int num)
{
    int r,max=0;
    while(num>0)
    {
        r=num%10;
        if(max<r)
        max=r;
        num=num/10;
    }
    printf("maximum=%d",max);
}
void main()
{
    int n;
    puts("Enter any number:");
    scanf("%d",&n);
    max_digit(n);
}