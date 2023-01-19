#include <stdio.h>
int factorial(int n)
{
    int i=0,fact=1;
    while(n>i)
    {
        fact=fact*(i+1);
        i++;
    }
    return fact;
}

void check_strong(int f_num,int l_num)
{   
    for(int i=f_num;i<=l_num;i++)
    {
        int r,s=0,j=i;
        while(j>0)
        {
            r=j%10;
            s=s+factorial(r);
            j=j/10;
        }
        if(i==s)
        printf("%d\t",i);
    }
}
void main()
{
    int a,b;
    puts("Enter first and last number:");
    scanf("%d%d",&a,&b);

   //calling check_strong function
   //factorial(num);

   check_strong(a,b);
}