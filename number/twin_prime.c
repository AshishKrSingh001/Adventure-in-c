#include <stdio.h>
int check_prime(int n)
{
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        c++;
    }
    if(c==2)
    return 1;
    else
    return 0;
}
void check_twin_prime(int n1,int n2)
{
    if(n2-n1==2 || n1-n2==2)
    if(check_prime(n1)==1 && check_prime(n2)==1)
    printf("\nGiven Number is Twin-Prime");
    else
    printf("\nGiven Number is Not Twin-Prime");
    else
    printf("\nGiven Number is Not Twin-Prime");

}
void main()
{
    int num1,num2;
    puts("\nEnter two number to check wheather numbers are twin prime or not:");
    scanf("%d%d",&num1,&num2);
    check_twin_prime(num1,num2);
}